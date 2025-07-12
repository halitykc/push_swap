
#include "push_swap.h"

#include <stddef.h>

long	ft_strtol(const char *str, char **endptr)
{
	long	result = 0;
	int		sign = 1;

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
	return result * sign;
}

static int	wc(char *str)
{
    int	count = 0;
    int	i = 0;

    while (str[i])
    {
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
    }
    return (count);
}

t_node *parse_args(char *arg)
{
	t_node	*head;
	t_node	*new;
	char	*endptr;

	head = NULL;
	while (*arg)
	{
		while (*arg == ' ')
			arg++;
		if (*arg)
		{
			new = ft_lstnew(ft_strtol(arg, &endptr));
			if (!new)
				return NULL; // Hata yönetimi eklenmeli
			ft_lstadd_back(&head, new);
			arg = endptr;
		}
	}
	return head;
}
