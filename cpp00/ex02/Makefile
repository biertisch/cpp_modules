NAME		=	bank

SRC			=	tests.cpp Account.cpp

OBJ_DIR		=	obj/
OBJ         =	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SRC))
DEP			=	$(patsubst %.cpp, $(OBJ_DIR)%.d, $(SRC))

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98
RM			=	rm -rf

SENTINEL	=	$(OBJ_DIR).compiled
LOGFILE		=	bank.log

all: $(NAME)

$(NAME): $(OBJ)
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
	@echo "Removing executable and log file..."
	@$(RM) $(NAME) $(LOGFILE)

re: fclean all

test: $(NAME)
	@./$(NAME) > $(LOGFILE)
	@sed 's/^\[[0-9]\{8\}_[0-9]\{6\}\] //' $(LOGFILE) > tmp1.log
	@sed 's/^\[[0-9]\{8\}_[0-9]\{6\}\] //' 19920104_091532.log > tmp2.log
	@echo "Differences between log files:"
	@diff tmp1.log tmp2.log || true
	@$(RM) tmp1.log tmp2.log

.PHONY: all clean fclean re test