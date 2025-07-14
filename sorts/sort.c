#include "../push_swap.h"

static void	sort_two(t_node **a)
{
	if ((*a)->value > (*a)->next->value)
		ft_swap_a(a);
}

static void	sort_three(t_node **a)
{
	int f;
	int s ;
	int t;

	s = (*a)->next->value;
	t = (*a)->next->next->value;
	f = (*a)->value;
	if (f < s && s > t && f < t)
	{
		ft_swap_a(a);
		ft_rotate_a(a);
	}
	else if (f > s && s < t && f < t)
		ft_swap_a(a);
	else if (f < s && s > t && f > t)
		ft_reverse_rotate_a(a);
	else if (f > s && s > t)
	{
		ft_swap_a(a);
		ft_reverse_rotate_a(a);
	}
	else if (f > s && s < t && f > t)
		ft_rotate_a(a);
}

void sort_small(t_node **a)
{
	if ((*a)->next->next == NULL)
		sort_two(a);
	else
		sort_three(a);
}

void    sort_stacks(t_node **stacka, t_node **stackb, int size)
{
    //(void)stackb;
    if (size <= 3)
        sort_small(stacka);
	else if (size <= 5)
		sort_fiveorfour(stacka,stackb);
	else if (size > 5)
		sort_big(stacka,stackb,size);
}
