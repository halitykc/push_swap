
CC = cc
FLAGS = -Wall -Werror -Wextra

SRCS = linkedlist.c error_handling.c arg_parse.c push_swap.c strjoin.c

all : 
	$(CC) $(FLAGS) $(SRCS)