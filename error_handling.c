/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:18 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/16 15:39:11 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned long	validate_numbers(char *arg)
{
	char	*endptr;
	long	value;

	if (!*arg)
		return (0);
	while (*arg)
	{
		if (*arg)
		{
			value = ft_strtol(arg, &endptr);
			if (endptr == arg)
				return (0);
			if (value < INT_MIN || value > INT_MAX)
				return (0);
			arg = endptr;
			if (*arg && *arg != ' ')
				return (0);
		}
	}
	return (1);
}

int	has_duplicate(t_node **head, int value)
{
	t_node	*s;

	s = *head;
	while (s)
	{
		if (s->value == value)
		{
			ft_lstclear(head);
			return (1);
		}
		s = s->next;
	}
	return (0);
}

void	error_msg_fail(char **str)
{
	free(*str);
	write(2, "Error\n", 6);
	return ;
}
