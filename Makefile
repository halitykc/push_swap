
CC = cc
FLAGS = -Wall -Werror -Wextra

SRCS = linkedlist.c error_handling.c arg_parse.c \
	push_swap.c strjoin.c ./rules/functions_ps_a.c ./rules/functions_ps_b.c \
	./rules/functions_ps_ab.c stack_init.c \
	./sorts/sort.c ./sorts/bigsort.c ./sorts/five_or_four_sort.c list_free.c

OBJS =$(SRCS:.c=.o)

NAME =push_swap

all: ${NAME}
${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re