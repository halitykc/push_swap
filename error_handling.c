
#include "push_swap.h"

unsigned long validate_numbers(char *arg)
{
	char *endptr;
	long value;

	if (!*arg)
		return	(0);
	while (*arg)
	{
		while (*arg == ' ')
			arg++;
		if (*arg)
		{
			value = ft_strtol(arg, &endptr);
            if (endptr == arg)
                return (0); //sayı okunmazsa örnek "abc" burada endptr mevcut ptr gösterirse çünkü strtol ilerlemicek
			if (value < INT_MIN || value > INT_MAX)
				return (0);
			arg = endptr;
            if (*arg && *arg != ' ')
                return (0);
		}
	}
	return (1);
}

int	has_duplicate(t_node *head, int value)
{
	while (head)
	{
		if (head->value == value)
			return (1); // Tekrar bulundu
		head = head->next;
	}
	return (0); // Tekrar yok
}

void	*error_msg(void)
{
	write(2, "Error\n", 6);
	return NULL;
}

void	error_msg_fail(char *str)
{
	free(str);
	write(2, "Error\n", 6);
	return ;
}