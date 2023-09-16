#include <unistd.h>

void    ft_putchar(int a)
{
    char    d;
    char    e;
    char    f;

    d = a + 48;
    if (a < 10)
    {
        write(1, "0", 1);
        write(1, &d, 1);
    }
    else
    {
        e = (a / 10) + 48;
        f = (a % 10) + 48;
        write(1, &e, 1);
        write(1, &f, 1);
    }
}

void    ft_print_comb2(void)
{
    int     a;
    int     b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(a);
            write(1, " ", 1);
            ft_putchar(b);
            if (a == 98 && b == 99)
            {
                return ;
            }
            write(1, ", ", 2);
            b++;
        }
        a++;
    }
}