NAME		=	bank.out

SRC			=	tests.cpp Account.cpp

OBJ_DIR		=	obj/
OBJ         =	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC))
DEP			=	$(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRC))

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98 -MMD -MP
RM			=	rm -rf

LOGFILE		=	bank.log

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
	@echo "Removing executable and log file..."
	@$(RM) $(NAME) $(LOGFILE)

re: fclean all

test: $(NAME)
	@./$(NAME) > $(LOGFILE)
	@sed 's/^\[[0-9]\{8\}_[0-9]\{6\}\] //' $(LOGFILE) > tmp1.log
	@sed 's/^\[[0-9]\{8\}_[0-9]\{6\}\] //' 19920104_091532.log > tmp2.log
	@echo "Differences between actual and expected output (if any):"
	@diff tmp1.log tmp2.log || true
	@$(RM) tmp1.log tmp2.log

.PHONY: all clean fclean re test

-include $(DEP)