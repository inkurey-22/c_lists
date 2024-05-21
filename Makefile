##
## Théophile "Inkurey22" R.
## C-lists_lib
## File description:
## Makefile
##

SRC	=

SRC_DIR = src
OBJ_DIR = obj

OBJ	= $(SRC:src/%.c=obj/%.o)

NAME = lists.lib

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

obj/%.o: src/%.c
	@echo -e "Compiling $<..."
	@mkdir -p $(dir $@)
	@$(CC) -c -o $@ $< $(CFLAGS)

clean:
	@echo "Cleaning..."
	@rm -rf $(OBJ_DIR)
	@echo "Clean completed."

fclean: clean
	@echo "Full Cleaning..."
	@rm -f $(NAME)
	@echo "Full Clean completed."

re: fclean all
