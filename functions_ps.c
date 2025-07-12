#include "push_swap.h"


void	ft_swap(t_node **stack)
{
	t_node *first;
    t_node *second;

	if (!*stack || !(*stack)->next)
		return;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	ft_push(t_node **from, t_node **to)
{
	t_node *tmp;

	if (!*from)
		return;
	tmp = *from;
	*from = (*from)->next;
	tmp->next = *to;
	*to = tmp;
}

void	ft_rotate(t_node **stack)
{
	t_node *first;
	t_node *last;

	if (!*stack || !(*stack)->next)
		return;
	first = *stack;
	*stack = first->next;
	first->next = NULL;

	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	ft_reverse_rotate(t_node **stack)
{
	t_node *prev;
	t_node *last;

	prev = NULL;
	last = *stack;
	if (!*stack || !(*stack)->next)
		return;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

