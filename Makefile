NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c printfhandlers.c printfhandlers2.c ft_putunsigned_fd.c ft_puthex_fd.c ft_putptr_fd.c 

OBJ = $(SRC:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
LIBFT_OBJ = $(LIBFT_PATH)/*.o

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		$(MAKE) -C $(LIBFT_PATH)
		ar rc $(NAME) $(OBJ) $(LIBFT_OBJ)
		ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re libft
