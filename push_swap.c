

#include "push_swap.h"

/*
    SUMMARY
    şimdi 2 arguman olarak veriler sayıları düzgün bir şekilde aliyor sıkıntı yok hatali sayı veya
    sayı olmayan birşeyler girdiğimde hatta veriyor burasıda okey max min int değerlerinde saygılı
    şimdilik bu kadar

*/

int main(int ac, char **av)
{
    if (ac == 2 && validate_numbers(av[1])) // string dizisinde int değerler verilmiş demek
    {
        t_node * number;
        number = parse_args(av[1]);
        while (number)
        {
            printf("num %i\n",number->value);
            number = number->next;
        }
    }
    else
    {
        printf("HATA!\n");
    }

}
