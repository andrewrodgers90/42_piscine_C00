#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
    {
        write(1, "N", 1);
    }
    else
    {
        write(1, "P", 1);
    }
}

int main(void)
{
    int p = 42;
    int n = -42;
    int o = 0;

    ft_is_negative(p);
    write(1, "\n", 1);
    ft_is_negative(n);
    write(1, "\n", 1);
    ft_is_negative(o);

    return (0);
}