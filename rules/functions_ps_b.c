#include "../push_swap.h"

void	ft_push_b(t_node **from, t_node **to)
{
	t_node *tmp;

	if (!*from)
		return;
	tmp = *from;
	*from = (*from)->next;
	tmp->next = *to;
	*to = tmp;
    write(1,"pb\n",3);

}
