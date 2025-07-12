
#include "push_swap.h"

int validate_numbers(char *arg)
{
	char *ptr = arg;
	char *endptr;
	long value;

	while (*ptr)
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr)
		{
			value = ft_strtol(ptr, &endptr);
            if (endptr == ptr)
                return (0); //sayı okunmazsa örnek "abc" burada endptr mevcut ptr gösterirse çünkü strtol ilerlemicek
            
			if (value < INT_MIN || value > INT_MAX)
				return (0);
			ptr = endptr;
            if (*ptr && *ptr != ' ')
                return (0);
		}
	}
	return (1);
}

