NAME	=	thisIsBrain.out

SRC		=	main.cpp
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

C++		=	c++
CFLAGS	=	-Wall -Werror -Wextra -g -std=c++98
RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking executable..."
	@$(C++) $(OBJ) -o $@
	@echo "$(NAME) built!"

%.o: %.cpp
	@echo "Compiling $@..."
	@$(C++) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object file..."
	@$(RM) $(OBJ)

fclean: clean
	@echo "Removing executable..."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re