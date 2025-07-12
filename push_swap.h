

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


//libs
#include <stdlib.h>
#include <stdio.h>
#include <limits.h> // INT_MIN, INT_MAX

//linkedlist
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

void	ft_lstadd_back(t_node **lst, t_node *new);
t_node	*ft_lstnew(int content);
t_node	*ft_lstlast(t_node *list);

//parsing
t_node	*parse_args(char *arg);
t_node	*parse_args_from_argv(int argc, char **argv);
long	ft_strtol(const char *str, char **endptr);
char	*ft_strjoin(int size, char **strs, char *sep);


// error handling
unsigned long validate_numbers(char *arg);
int	has_duplicate(t_node *head, int value);
void	*error_msg(void);


// PS Functions
void	ft_swap(t_node **stack);
void	ft_push(t_node **from, t_node **to);
void	ft_rotate(t_node **stack);
void	ft_reverse_rotate(t_node **stack);

#endif