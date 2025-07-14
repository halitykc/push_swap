

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


//libs
#include <stdlib.h>
#include <limits.h> // INT_MIN, INT_MAX
#include <unistd.h>

#define EXIT_FAIL 1
#define EXIT_SUCCESS 0

//linkedlist
typedef struct s_node
{
	int				value;
	struct s_node	*next;
	int				index;
}	t_node;

void	ft_lstadd_back(t_node **lst, t_node *new);
t_node	*ft_lstnew(int content);
t_node	*ft_lstlast(t_node *list);
int	ft_lstsize(t_node *lst);
void	ft_lstclear(t_node **lst);

//parsing
t_node	*parse_args(char *arg);
long	ft_strtol(const char *str, char **endptr);
char	*ft_strjoin(int size, char **strs, char *sep);


// error handling
unsigned long validate_numbers(char *arg);
int	has_duplicate(t_node *head, int value);
void	*error_msg(void);
void	error_msg_fail(char *str);


// PS Functions
void	ft_swap_a(t_node **stack);
void	ft_push_a(t_node **from, t_node **to);
void	ft_rotate_a(t_node **stack);
void	ft_reverse_rotate_a(t_node **stack);

void	ft_swap_b(t_node **stack);
void	ft_push_b(t_node **from, t_node **to);
void	ft_rotate_b(t_node **stack);
void	ft_reverse_rotate_b(t_node **stack);

//init
int    ft_stacks_init(t_node **stack_a, t_node ** stack_b, char **args);


// sort 
void    sort_stacks(t_node **stacka, t_node **stackb, int size);
void sort_big(t_node **a, t_node **b, int size);
void sort_small(t_node **a);
void	sort_fiveorfour(t_node **a, t_node **b);

#endif