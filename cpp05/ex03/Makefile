NAME = intern

SRC = 	src/main.cpp src/Bureaucrat.cpp src/AForm.cpp \
		src/ShrubberyCreationForm.cpp src/PresidentialPardonForm.cpp \
		src/RobotomyRequestForm.cpp src/Intern.cpp

OBJ = $(SRC:.cpp=.o)
CXX = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

exe: all
	@./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re