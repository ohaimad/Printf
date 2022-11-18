NAME = libftprintf.a
AR = ar rc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_putnbr_hex.c ft_adresse.c ft_putnbr_u.c \

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

CC = cc

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f	$(NAME)

re:  fclean all
