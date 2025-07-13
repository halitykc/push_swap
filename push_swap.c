

#include "push_swap.h"

int is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return 0;
		stack = stack->next;
	}
	return 1;
}
/*
    SUMMARY
    şimdi 2 arguman olarak veriler sayıları düzgün bir şekilde aliyor sıkıntı yok hatali sayı veya
    sayı olmayan birşeyler girdiğimde hatta veriyor burasıda okey max min int değerlerinde saygılı
    şimdilik bu kadar


    -fonksiyonlar çalışıyor.
    -linkedlist doğru sıralanıyor
    -initialize doğru çalışıyor stack a doğru bir şekilde ekleniyor
    -Kucuk Sayılar sortlaniyor 3'e kadar olanlar
    
*/

int main(int ac, char **av)
{
    t_node * stack_a;
    t_node * stack_b;

    char *argss;
    argss = ft_strjoin(ac-1,av+1, " ");
    if (ac >= 2 && validate_numbers(argss)) // string dizisinde int değerler verilmiş demek
    {
        ft_stacks_init(&stack_a, &stack_b, &argss);
        if (!is_sorted(stack_a))
        {
            sort_stacks(&stack_a, &stack_b, ft_lstsize(stack_a));
            ft_lstclear(&stack_a);
            ft_lstclear(&stack_b);
            exit(EXIT_SUCCESS);
        }
    }
    else
    {
        error_msg_fail(argss);
        exit(EXIT_FAIL);
    }    
}


