#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    a = 'z';

    while (a >= 'a' && a <= 'z')
    {
        write(1, &a, 1);
        a--;
    }
}