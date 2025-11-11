NAME	=	materia.out

SRC		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ_DIR	=	obj/
OBJ		=	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC))
DEP		=	$(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRC))

C++		=	c++
CFLAGS	=	std=c++98 -g -Wall -Werror -Wextra -MMD -MP
RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking executable..."
	@$(C++) $(OBJ) -o $@
	@echo "$(NAME) built!"

$(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
	@echo "Compiling $@..."
	@$(C++) $(CFLAGS) -c $< -o $o

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@echo "Removing object files..."
	@$(RM) $(OBJ_DIR)

flcean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME)

re: flcean all

.PHONY: all clean fclean re

-include $(DEP)