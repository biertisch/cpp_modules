NAME		=	phonebook

SRC			=	main.cpp input.cpp PhoneBook.cpp Contact.cpp
OBJ         =	$(patsubst %.cpp, %.o, $(SRC))

HDR			=	main.hpp PhoneBook.hpp Contact.hpp

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98
RM			=	rm -rf

SENTINEL	=	.compiled

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	@echo "Linking executable..."
	@$(C++) $(OBJ) -o $@
	@echo "$(NAME) built!"

%.o: %.cpp
	@$(C++) $(CFLAGS) -c $< -o $@

$(OBJ): $(SENTINEL)

$(SENTINEL):
	@echo "Compiling object files..."
	@touch $@

clean:
	@echo "Removing object files..."
	@$(RM) .compiled $(OBJ)

fclean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re