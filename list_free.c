/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyakici <hyakici@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:56:28 by hyakici           #+#    #+#             */
/*   Updated: 2025/07/15 15:56:29 by hyakici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_lstdelone(t_node *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	ft_lstclear(t_node **lst)
{
	t_node	*ptrtonext;

	if (!lst)
		return ;
	while (*lst)
	{
		ptrtonext = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = ptrtonext;
	}
}
