SRC=		my_putstr.c	\
		bsq.c		\
		get_size.c	\
		my_strlen.c	\
		char_to_int.c	\
		algo.c		\
		my_tablen.c	\
		max_value.c	\
		final_print.c	\
		find_max_value.c\
		count_lines.c

OBJ=		$(SRC:.c=.o)

NAME=		bsq

CFLAGS=		-Wall -Wextra -I./include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -g3 -o $(NAME) $(SRC) $(CFLAGS)
		rm -f *.o
		rm -f *.gch

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
