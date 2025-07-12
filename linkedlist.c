
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