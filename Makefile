NAME = libftprintf.a

CC = gcc 
CFLAGS = -Wextra -Werror -Wall 

SRCS = ft_printf.c \
	   ft_puthex_fd.c \
	   ft_putptr_fd.c \
	   ft_putunsigned_fd.c \
	   printfhandlers.c \
	   printfhandlers2.c \

OBJS = $(SRCS:.c=.o)
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) fclean
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
