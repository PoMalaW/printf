#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *csrc;
    unsigned char *cdest;

    i = 0;
    csrc = (unsigned char *)src;
    cdest = (unsigned char *)dest;

    if(cdest > csrc)
    {
        while(n > 0)
        {
            n--;
            cdest[n] = csrc[n];
        }
    }
    else
        while(i < n)
        {
            cdest[i] = csrc[i];
            i++;
        }
    return(cdest);
}