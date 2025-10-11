NAME		=	thisIsBrain

SRC			=	main.cpp
OBJ         =	$(patsubst %.cpp, %.o, $(SRC))

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98
RM			=	rm -rf

SENTINEL	=	.compiled

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking executable..."
	@$(C++) $(OBJ) -o $@
	@echo "$(NAME) built!"

%.o: %.cpp
	@$(C++) $(CFLAGS) -c $< -o $@

$(OBJ): $(SENTINEL)

$(SENTINEL):
	@echo "Compiling object file..."
	@touch $@

clean:
	@echo "Removing object file..."
	@$(RM) $(SENTINEL) $(OBJ)

fclean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re