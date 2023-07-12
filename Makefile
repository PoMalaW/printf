NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDLIBS = -L. -lft
LDFLAGS =
SRC = ft_printf.c ft_printf_printers.c ft_printf_numprinters.c \
	ft_printf_pointer.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
RM = rm -f
INC = -I

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(INC) -o $@ -c $< $(CFLAGS)

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re