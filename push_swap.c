/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:55:29 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/15 15:55:31 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	*argss;

	argss = ft_strjoin(ac - 1, av + 1, " ");
	if (ac >= 2 && validate_numbers(argss))
	{
		ft_stacks_init(&stack_a, &stack_b, &argss);
		if (!is_sorted(stack_a))
		{
			sort_stacks(&stack_a, &stack_b, ft_lstsize(stack_a));
			ft_lstclear(&stack_a);
			ft_lstclear(&stack_b);
			exit(EXIT_SUCCESS);
		}
	}
	else
	{
		error_msg_fail(argss);
		exit(EXIT_FAIL);
	}
}
