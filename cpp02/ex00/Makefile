NAME		=	fixed.out

SRC			=	main.cpp Fixed.cpp

OBJ_DIR		=	obj/
OBJ         =	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC))
DEP			=	$(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRC))

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98 -MMD -MP
RM			=	rm -rf

OUTFILE		= 	output.txt

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking executable..."
	@$(C++) $(OBJ) -o $@
	@echo "$(NAME) built!"

$(OBJ_DIR)%.o: %.cpp | $(OBJ_DIR)
	@echo "Compiling $@..."
	@$(C++) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "Removing object files..."
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME) $(OUTFILE)

re: fclean all

test: $(NAME)
	@./$(NAME) > $(OUTFILE)
	@echo "Differences between actual and expected output (if any):"
	@diff $(OUTFILE) expected.txt

.PHONY: all clean fclean re

-include $(DEP)