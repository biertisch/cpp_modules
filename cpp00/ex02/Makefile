NAME		=	bank

SRC			=	tests.cpp Account.cpp
OBJ         =	$(patsubst %.cpp, %.o, $(SRC))

HDR			=	Account.hpp

C++			=	c++
CFLAGS		=	-Wall -Werror -Wextra -g -std=c++98
RM			=	rm -rf

SENTINEL	=	.compiled
LOGFILE		=	bank.log

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