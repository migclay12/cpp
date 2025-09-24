# 🔧 Mejoras Sugeridas para el Código

## 1. Estandarización de Include Guards

### Problema Actual
Algunos archivos usan `#ifndef/#define` y otros `#pragma once`.

### Solución Recomendada
Estandarizar en `#pragma once` (más moderno y eficiente):

```cpp
// ❌ Forma antigua
#ifndef HEADER_NAME_H
#define HEADER_NAME_H
// contenido
#endif

// ✅ Forma moderna
#pragma once
// contenido
```

## 2. Typedefs Consistentes

### Problema Actual
```cpp
typedef std::string str;  // Solo en algunos archivos
```

### Solución Recomendada
Crear un header común `Common.hpp`:

```cpp
#pragma once
#include <string>
#include <iostream>

typedef std::string str;
typedef std::ostream ostream;
typedef std::istream istream;
```

## 3. Documentación de Código

### Agregar Comentarios Explicativos

```cpp
/**
 * @brief Clase para representar un contacto telefónico
 * @details Almacena información personal y métodos de contacto
 */
class Contact {
private:
    str _firstName;    ///< Nombre del contacto
    str _lastName;     ///< Apellido del contacto
    str _nickname;     ///< Apodo del contacto
    str _phoneNumber;  ///< Número de teléfono
    str _darkSecret;   ///< Secreto oscuro del contacto

public:
    /**
     * @brief Constructor por defecto
     * @details Inicializa todos los campos como cadenas vacías
     */
    Contact();
    
    /**
     * @brief Obtiene el nombre completo del contacto
     * @return Concatenación de nombre y apellido
     */
    str getFullName() const;
};
```

## 4. Mejoras en Makefiles

### Makefile Optimizado

```makefile
# Variables
NAME = phonebook
SRC_DIR = src
INC_DIR = includes
OBJ_DIR = obj

# Archivos fuente
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)
LDFLAGS = 

# Colores para output
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
NC = \033[0m # No Color

# Reglas
all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(GREEN)Compilando $(NAME)...$(NC)"
	$(CXX) $(OBJECTS) -o $(NAME) $(LDFLAGS)
	@echo "$(GREEN)¡Compilación exitosa!$(NC)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "$(YELLOW)Compilando $<...$(NC)"
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	@echo "$(RED)Limpiando objetos...$(NC)"
	rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)Limpiando ejecutables...$(NC)"
	rm -f $(NAME)

re: fclean all

# Reglas adicionales útiles
run: $(NAME)
	./$(NAME)

debug: CXXFLAGS += -g -DDEBUG
debug: $(NAME)

.PHONY: all clean fclean re run debug
```

## 5. Mejoras en Manejo de Errores

### Clases de Excepción Más Específicas

```cpp
class ContactException : public std::exception {
public:
    explicit ContactException(const std::string& msg) : _msg(msg) {}
    virtual const char* what() const throw() { return _msg.c_str(); }
private:
    std::string _msg;
};

class InvalidPhoneNumberException : public ContactException {
public:
    InvalidPhoneNumberException() : ContactException("Número de teléfono inválido") {}
};

class EmptyFieldException : public ContactException {
public:
    EmptyFieldException(const std::string& field) 
        : ContactException("Campo '" + field + "' no puede estar vacío") {}
};
```

## 6. Validación de Entrada

### Función de Validación Robusta

```cpp
class InputValidator {
public:
    static bool isValidPhoneNumber(const std::string& phone) {
        if (phone.empty()) return false;
        
        // Verificar que solo contenga dígitos, espacios, +, -, (, )
        for (char c : phone) {
            if (!std::isdigit(c) && c != ' ' && c != '+' && 
                c != '-' && c != '(' && c != ')') {
                return false;
            }
        }
        
        // Verificar que tenga al menos 10 dígitos
        int digitCount = 0;
        for (char c : phone) {
            if (std::isdigit(c)) digitCount++;
        }
        
        return digitCount >= 10;
    }
    
    static bool isValidName(const std::string& name) {
        if (name.empty() || name.length() < 2) return false;
        
        // Verificar que solo contenga letras y espacios
        for (char c : name) {
            if (!std::isalpha(c) && c != ' ') return false;
        }
        
        return true;
    }
};
```

## 7. Uso de Constantes

### Definir Constantes Globales

```cpp
// En un header Constants.hpp
#pragma once

namespace PhoneBookConstants {
    const int MAX_CONTACTS = 8;
    const int MAX_FIELD_LENGTH = 50;
    const int TRUNCATE_LENGTH = 10;
    const std::string FIELD_SEPARATOR = "|";
    const std::string EMPTY_FIELD = "";
}
```

## 8. Funciones de Utilidad

### Helper Functions

```cpp
namespace Utils {
    std::string truncateString(const std::string& str, size_t maxLength) {
        if (str.length() <= maxLength) return str;
        return str.substr(0, maxLength - 1) + ".";
    }
    
    std::string formatPhoneNumber(const std::string& phone) {
        std::string formatted = phone;
        // Lógica de formateo
        return formatted;
    }
    
    void printSeparator(char separator = '-', int length = 50) {
        std::cout << std::string(length, separator) << std::endl;
    }
}
```

## 9. Mejoras Específicas para CPP09

### BitcoinExchange (cpp09/ex00)

#### Validación de Fechas Mejorada
```cpp
class DateValidator {
public:
    static bool isValidDate(const std::string& dateStr) {
        if (dateStr.length() != 10) return false;
        
        // Verificar formato YYYY-MM-DD
        if (dateStr[4] != '-' || dateStr[7] != '-') return false;
        
        try {
            int year = std::stoi(dateStr.substr(0, 4));
            int month = std::stoi(dateStr.substr(5, 2));
            int day = std::stoi(dateStr.substr(8, 2));
            
            // Validar rangos
            if (year < 2009 || year > 2024) return false; // Bitcoin existe desde 2009
            if (month < 1 || month > 12) return false;
            if (day < 1 || day > 31) return false;
            
            return true;
        } catch (...) {
            return false;
        }
    }
};
```

#### Búsqueda Optimizada
```cpp
float findExchangeRate(const std::map<int, float>& database, int date) {
    auto it = database.lower_bound(date);
    
    if (it != database.end() && it->first == date) {
        return it->second; // Fecha exacta encontrada
    }
    
    if (it == database.begin()) {
        throw std::runtime_error("Bitcoin did not exist at that time");
    }
    
    --it; // Usar la fecha más cercana anterior
    return it->second;
}
```

### RPN Calculator (cpp09/ex01)

#### Validación de Sintaxis Mejorada
```cpp
class RPNSyntaxValidator {
public:
    static bool validateExpression(const std::string& expr) {
        int operandCount = 0;
        int operatorCount = 0;
        
        std::istringstream iss(expr);
        std::string token;
        
        while (iss >> token) {
            if (std::isdigit(token[0])) {
                operandCount++;
            } else if (isOperator(token[0])) {
                operatorCount++;
                if (operandCount < 2) return false; // Necesitamos al menos 2 operandos
                operandCount--; // Un operador consume 2 operandos y produce 1
            } else {
                return false; // Token inválido
            }
        }
        
        return operandCount == 1 && operatorCount > 0;
    }
    
private:
    static bool isOperator(char c) {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }
};
```

### PmergeMe (cpp09/ex02)

#### Medición de Tiempo Precisa
```cpp
class PerformanceTimer {
private:
    std::chrono::high_resolution_clock::time_point start_time;
    
public:
    void start() {
        start_time = std::chrono::high_resolution_clock::now();
    }
    
    double getElapsedMicroseconds() {
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
            end_time - start_time);
        return duration.count();
    }
};
```

#### Algoritmo Ford-Johnson Optimizado
```cpp
template<typename Container>
class FordJohnsonSorter {
public:
    static void sort(Container& container) {
        if (container.size() <= 1) return;
        
        // Dividir en pares y ordenar
        auto pairs = createSortedPairs(container);
        
        // Ordenar pares por su elemento mayor
        std::sort(pairs.begin(), pairs.end(), 
            [](const auto& a, const auto& b) {
                return a.second < b.second;
            });
        
        // Construir secuencia principal
        Container main_chain;
        Container pending_elements;
        
        for (const auto& pair : pairs) {
            main_chain.push_back(pair.second);
            pending_elements.push_back(pair.first);
        }
        
        // Insertar elementos pendientes usando búsqueda binaria
        insertPendingElements(main_chain, pending_elements);
        
        container = main_chain;
    }
    
private:
    static std::vector<std::pair<typename Container::value_type, 
                                 typename Container::value_type>>
    createSortedPairs(const Container& container) {
        // Implementación del paso de creación de pares
    }
};
```

## 10. Mejoras Generales para Todo el Proyecto

### Constantes Globales
```cpp
// En un header Common.hpp
namespace BitcoinConstants {
    const int MIN_YEAR = 2009;
    const int MAX_YEAR = 2024;
    const float MAX_VALUE = 1000.0f;
    const float MIN_VALUE = 0.0f;
}

namespace RPNConstants {
    const std::string VALID_OPERATORS = "+-*/";
    const int MAX_SINGLE_DIGIT = 9;
}
```

### Logging y Debug
```cpp
class Logger {
public:
    enum Level { DEBUG, INFO, WARNING, ERROR };
    
    static void log(Level level, const std::string& message) {
        #ifdef DEBUG
        std::cerr << "[" << getLevelString(level) << "] " 
                  << message << std::endl;
        #endif
    }
    
private:
    static std::string getLevelString(Level level) {
        switch(level) {
            case DEBUG: return "DEBUG";
            case INFO: return "INFO";
            case WARNING: return "WARNING";
            case ERROR: return "ERROR";
            default: return "UNKNOWN";
        }
    }
};
```

Estas mejoras harán tu código más profesional, mantenible y fácil de entender, especialmente para los proyectos más avanzados de cpp09.
