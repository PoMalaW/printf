#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    size_t i;

    i = 0;

    while(s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    write(fd, "\n", 1);
}