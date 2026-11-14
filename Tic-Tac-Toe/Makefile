# Makefile

NAME = tic-tac-toe

SRCS = main.c \
	interface.c \
	chosen_case.c \
	write_case.c \
	laptop.c \
	victory.c


all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all