#include <unistd.h>

void    ft_putnbr(int nb)
{
    long    num;
    int     i;
    char    arr[20];

    num = nb;
    i = 0;
    if (nb == 0)
    {
        write(1, "0", 1);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        num *= -1;
    }
    while (num > 0)
    {
        arr[i++] = (num % 10) + 48;
        num /= 10;
    }
    while (i > 0)
        write(1, &arr[--i], 1);
}