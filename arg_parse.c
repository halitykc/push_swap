
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

t_node	*parse_args(char *arg)
{
	t_node	*head;
	t_node	*new;
	char	*endptr;
	long value;

	head = NULL;
	while (*arg)
	{
		while (*arg == ' ')
			arg++;
		if (*arg)
		{
			value = ft_strtol(arg, &endptr);
			new = ft_lstnew(ft_strtol(arg, &endptr));
			if (!new || has_duplicate(head, (int)value))
				return (error_msg()); // Hata yönetimi eklenmeli
			ft_lstadd_back(&head, new);
			arg = endptr;
		}
	}
	return head;
}

t_node	*parse_args_from_argv(int argc, char **argv)
{
	t_node	*head = NULL;
	t_node	*new;
	long	value;
	int		i = 1;

	while (i < argc)
	{
		char *endptr;
	
		value = ft_strtol(argv[i], &endptr);
		if (endptr == argv[i] || *endptr != '\0')
			return (error_msg());
		if (value < INT_MIN || value > INT_MAX)
			return (error_msg());
		if (has_duplicate(head, (int)value))
			return (error_msg());
		new = ft_lstnew((int)value);
		if (!new)
			return (error_msg());
		ft_lstadd_back(&head, new);
		i++;
	}
	return head;
}
