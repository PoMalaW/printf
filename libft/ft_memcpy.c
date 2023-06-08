#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *csrc;
    char *cdest;

    i = 0;
    csrc = (char *)src;
    cdest = (char *)dest;

    while(i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return(cdest);
}