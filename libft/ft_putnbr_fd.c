#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    int        sign;

    sign = 1;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        sign = -1;
    }
    if (n / 10)
        ft_putnbr_fd(n / 10 * sign, fd);
    ft_putchar_fd('0' + n % 10 * sign, fd);
}