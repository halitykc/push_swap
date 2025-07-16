/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:34 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/16 15:10:25 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stacks_init(t_node **stack_a, t_node **stack_b, char **args)
{
	*stack_a = NULL;
	*stack_b = NULL;
	*stack_a = parse_args(*args);
	if (!*stack_a)
	{
		error_msg_fail(args);
		exit(EXIT_FAIL);
		return (0);
	}
	free(*args);
	return (1);
}
