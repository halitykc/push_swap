

#include "push_swap.h"

/*
    SUMMARY
    şimdi 2 arguman olarak veriler sayıları düzgün bir şekilde aliyor sıkıntı yok hatali sayı veya
    sayı olmayan birşeyler girdiğimde hatta veriyor burasıda okey max min int değerlerinde saygılı
    şimdilik bu kadar

*/

int main(int ac, char **av)
{
    t_node * number;

    char *argss;
    argss = ft_strjoin(ac-1,av+1, " ");
    if (ac >= 2 && validate_numbers(argss)) // string dizisinde int değerler verilmiş demek
    {
        number = parse_args(argss);
        free(argss);
    }
    ft_swap(&number);
    ft_rotate(&number);
    ft_reverse_rotate(&number);
    while (number)
    {
        printf("num %i\n", number->value);
        number = number->next;
    }   
}

