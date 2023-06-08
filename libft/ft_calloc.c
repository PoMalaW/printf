#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *mem;
    if(nmemb > 65535 || size > 65535)
        return(NULL);
    mem =(void *)malloc(nmemb * size);
    if(!mem)
        return(NULL);
    ft_bzero(mem, (nmemb * size));
    return(mem);
}