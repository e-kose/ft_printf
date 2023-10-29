NAME = libftprintf.a

SOURC = ft_hexa.c ft_printf.c ft_putunbr.c \
		ft_putnbr.c ft_putstr.c ft_putchar.c

OBJECT = $(SOURC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

all: $(NAME)

$(NAME) : $(OBJECT)
	$(AR) -r $(NAME) $(OBJECT)

bonus : $(OBJECT) $(BOBJECT)
	$(AR) -r $(NAME) $(OBJECT) $(BOBJECT)

clean :
	rm -rf $(OBJECT) $(BOBJECT)

fclean : clean
	rm -rf	$(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
