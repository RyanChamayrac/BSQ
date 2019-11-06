SRC=		utility/my_putstr.c	\
		src/bsq.c		\
		src/get_size.c	\
		utility/my_strlen.c	\
		utility/char_to_int.c	\
		src/algo.c		\
		utility/my_tablen.c	\
		src/max_value.c	\
		src/final_print.c	\
		src/find_max_value.c\
		utility/count_lines.c

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
