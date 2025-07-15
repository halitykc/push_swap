/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:24 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/15 15:56:25 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstlast(t_node *list)
{
	if (!list)
		return (0);
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}

t_node	*ft_lstnew(int content)
{
	t_node	*a;

	a = malloc(sizeof(t_node));
	if (!a)
		return (NULL);
	a->value = content;
	(*a).next = NULL;
	return (a);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*a;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		a = ft_lstlast(*lst);
		a->next = new;
	}
	else
		*lst = new;
}

int	ft_lstsize(t_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
