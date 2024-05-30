##
## Théophile "Inkurey22" R.
## C-lists_lib
## File description:
## Makefile
##

SRC	=   list_lib/size.c		\
        list_lib/sort.c		\
        list_lib/find.c		\
		list_lib/append.c	\
		list_lib/remove.c 	\
		list_lib/create.c	\
		list_lib/reverse.c 	\
		list_lib/free_list.c	\
		list_lib/insert_at.c	\

SRC_DIR = list_lib
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
