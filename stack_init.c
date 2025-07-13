
#include "push_swap.h"



int    ft_stacks_init(t_node **stack_a, t_node ** stack_b, char **args)
{
    *stack_a = NULL;
    *stack_b = NULL;
    *stack_a = parse_args(*args);
    if (!*stack_a)
    {
        error_msg_fail(*args);
        return (0);
    }
    free(*args);
    return (1);
}