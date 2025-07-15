/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:55:56 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/15 15:55:56 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	index_stack(t_node *stack)
{
	t_node	*ptr1;
	t_node	*ptr2;
	int		index;

	ptr1 = stack;
	while (ptr1)
	{
		index = 0;
		ptr2 = stack;
		while (ptr2)
		{
			if (ptr2->value < ptr1->value)
				index++;
			ptr2 = ptr2->next;
		}
		ptr1->index = index;
		ptr1 = ptr1->next;
	}
}

static void	ft_max_bits(int *max_bits, int size)
{
	while ((size - 1) >> *max_bits)
		(*max_bits)++;
}

void	sort_big(t_node **a, t_node **b, int size)
{
	int		max_bits;
	int		j;
	int		i;
	t_node	*tmp;

	i = -1;
	max_bits = 0;
	index_stack(*a);
	ft_max_bits(&max_bits, size);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 0)
				ft_push_b(a, b);
			else
				ft_rotate_a(a);
		}
		while (*b)
			ft_push_a(b, a);
	}
}
