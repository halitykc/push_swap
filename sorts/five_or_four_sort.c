
#include "../push_swap.h"

static int	find_min(t_node *stack)
{
	int	min;

	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

static void	move_min_to_top(t_node **a, int min)
{
	int		i;
	int		size;
	t_node	*tmp;

	i = 0;
	tmp = *a;
	while (tmp && tmp->value != min)
	{
		i++;
		tmp = tmp->next;
	}
	size = ft_lstsize(*a);
	if (i <= size / 2)
		while ((*a)->value != min)
			ft_rotate_a(a);
	else
		while ((*a)->value != min)
			ft_reverse_rotate_a(a);
}

void	sort_fiveorfour(t_node **a, t_node **b)
{
	int		size;
	int		min;

	size = ft_lstsize(*a);
	while (size > 3)
	{
		min = find_min(*a);
		move_min_to_top(a, min);
		ft_push_b(a, b);
		size--;
	}
	sort_small(a); // sort_three gibi çalışır
	while (*b)
		ft_push_a(b, a);
}
