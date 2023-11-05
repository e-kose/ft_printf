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
	@echo "\033[33m  __ _                  _       _    __"
	@echo " / _| |                (_)     | |  / _|"
	@echo "| |_| |_     _ __  _ __ _ _ __ | |_| |_"
	@echo "|  _| __|   | '_ \| '__| | '_ \| __|  _|"
	@echo "| | | |_    | |_) | |  | | | | | |_| |"
	@echo "|_|  \__|   | .__/|_|  |_|_| |_|\__|_|"
	@echo "    ______| |"
	@echo "   |______|_\033[0m"

clean :
	rm -rf $(OBJECT) $(BOBJECT)

fclean : clean
	rm -rf	$(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
