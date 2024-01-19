CC = cc
FLAGS = -Wall -Werror -Wextra
AR = ar -rc
RM = rm -rf
FILES = ft_printf.c ft_putaddr.c ft_putchar.c ft_puthex.c \
		ft_putnbr.c ft_putstr.c ft_putunsigned.c
OBJ = $(FILES:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all