NAME		=	moarBrainz.out

SRC			=	main.cpp Zombie.cpp zombieHorde.cpp

OBJ_DIR		=	obj/
OBJ         =	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC))
DEP			=	$(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRC))

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98
RM			=	rm -rf

SENTINEL	=	$(OBJ_DIR).compiled

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	@echo "Linking executable..."
	@$(C++) $(OBJ) -o $@
	@echo "$(NAME) built!"

$(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
	@$(C++) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ): $(SENTINEL)

$(SENTINEL):
	@echo "Compiling object files..."
	@touch $@

clean:
	@echo "Removing object files..."
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re