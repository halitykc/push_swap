
CC = cc
FLAGS = -Wall -Werror -Wextra

SRCS = linkedlist.c error_handling.c arg_parse.c \
	push_swap.c strjoin.c ./rules/functions_ps_a.c ./rules/functions_ps_b.c \
	./rules/functions_ps_ab.c stack_init.c \
	sort.c

all : 
	$(CC) $(FLAGS) $(SRCS)