#include <unistd.h>

void    ft_putchar_space(int a, int b, int c)
{
    char    d;
    char    e;
    char    f;

    d = a + 48;
    e = b + 48;
    f = c + 48;
    write(1, &d, 1);
    write(1, &e, 1);
    write(1, &f, 1);
    write(1, ", ", 2);
}

void    ft_putchar(int a, int b, int c)
{
    char    d;
    char    e;
    char    f;

    d = a + 48;
    e = b + 48;
    f = c + 48;
    write(1, &d, 1);
    write(1, &e, 1);
    write(1, &f, 1);
}

void    ft_print_comb(void)
{
    int     a;
    int     b;
    int     c;

    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                if(a == 7 && b == 8 && c == 9)
                    ft_putchar(a, b, c);
                else
                    ft_putchar_space(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}