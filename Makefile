##
## Théophile "Inkurey22" R.
## C-lists_lib
## File description:
## Makefile
##

SRC	=   $(SRC_DIR)/size.c		\
        $(SRC_DIR)/sort.c		\
        $(SRC_DIR)/find.c		\
        $(SRC_DIR)/append.c	\
        $(SRC_DIR)/remove.c 	\
        $(SRC_DIR)/create.c	\
        $(SRC_DIR)/reverse.c 	\
        $(SRC_DIR)/free_list.c	\
        $(SRC_DIR)/insert_at.c	\

SRC_DIR = list_lib
OBJ_DIR = obj

OBJ	= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

NAME = lists.a

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
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
