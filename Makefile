# File names and directories
NAME = push_swap
LIBFT = libft.a
PRINTF = libftprintf.a
SRC_FILES = push_swap.c sort.c utils.c quicksort.c push.c rotate.c reverse_rotate.c swap.c
SRC = $(SRC_FILES)
OBJ = ${SRC:.c=.o}
OBJBB = ${filter-out push_swap.o, $(OBJ)}

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
LDFLAGS = -L
INCLUDE = -I include
RM = rm -rf

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@cp libft/$(LIBFT) .
	@make -C printf
	@cp printf/$(PRINTF) .
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) $(LIBFT) $(PRINTF) -o $(NAME)

clean:
	make clean -C libft
	make clean -C printf
	$(RM) $(OBJ)

fclean: clean
	@make fclean -C libft
	@make fclean -C printf
	$(RM) $(NAME)
	$(RM) $(LIBFT)
	$(RM) libft/$(PRINTF)
	$(RM) $(PRINTF)
	$(RM) printf/$(PRINTF)

re: fclean all

.PHONY: all clean fclean re