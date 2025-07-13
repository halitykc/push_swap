
#include "../push_swap.h"

void	ft_swap_ab(t_node **a,t_node **b)
{
    ft_push_a(b,a);
    ft_push_b(a,b);
}

void	ft_rotate_ab(t_node **a,t_node **b)
{
    ft_rotate_a(a);
    ft_rotate_b(b);
}

void	ft_reverse_rotate_ab(t_node **a,t_node **b)
{
    ft_reverse_rotate_a(a);
    ft_reverse_rotate_b(b);
}
