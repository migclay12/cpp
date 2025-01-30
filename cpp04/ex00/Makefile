NAME = animal

SRC = src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp src/WrongAnimal.cpp src/WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re