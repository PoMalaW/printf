NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDLIBS = -lft
LDFLAGS = -L.
SRC = ft_isalpha.c ft_isdigit.c ft_tolower.c ft_toupper.c ft_isalnum.c \
	ft_strchr.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_atoi.c \
	ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_strrchr.c ft_strncmp.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_strnstr.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c

BONUS_OBJ = $(BONUS:.c=.o)
RM = rm -f
INC = ./inc/

# Make sure the functions are properly called
all: $(NAME)

# Create the library and compile
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -I. -o $@ -c $< $(CFLAGS)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all clean

.PHONY: all clean fclean re bonus