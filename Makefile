SRC=		my_putstr.c	\
		bsq.c



OBJ=		$(SRC:.c=.o)

NAME=		bsq

CFLAGS=		-Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)
		rm -f *.o
		rm -f *.gch

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
