/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:13 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/16 15:39:14 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_strtol(const char *str, char **endptr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return (result * sign);
}

t_node	*parse_args(char *arg)
{
	t_node	*head;
	t_node	*new;
	char	*endptr;
	long	value;

	head = NULL;
	while (*arg)
	{
		if (*arg)
		{
			value = ft_strtol(arg, &endptr);
			new = ft_lstnew((int)value);
			if (!new || has_duplicate(&head, (int)value))
			{
				free(new);
				return (NULL);
			}
			ft_lstadd_back(&head, new);
			arg = endptr;
		}
	}
	return (head);
}
