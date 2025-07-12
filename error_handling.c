
#include "push_swap.h"

unsigned long validate_numbers(char *arg)
{
	char *endptr;
	long value;

	if (!*arg)
		return	((unsigned long)error_msg());
	while (*arg)
	{
		while (*arg == ' ')
			arg++;
		if (*arg)
		{
			value = ft_strtol(arg, &endptr);
            if (endptr == arg)
                return ((unsigned long)error_msg()); //sayı okunmazsa örnek "abc" burada endptr mevcut ptr gösterirse çünkü strtol ilerlemicek
			if (value < INT_MIN || value > INT_MAX)
				return ((unsigned long)error_msg());
			arg = endptr;
            if (*arg && *arg != ' ')
                return ((unsigned long)error_msg());
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
	printf("ERROR\n");
	return NULL;
}

