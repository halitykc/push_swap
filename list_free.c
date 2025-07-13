
#include "push_swap.h"

static void	ft_lstdelone(t_node *lst)
{
	if (!lst)
		return ;
	//del(lst->content);
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