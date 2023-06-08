#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if(little[0] == '\0')
        return((char *)big);
    while(big[i] && i < n)
    {
        j = 0;
        if(big[i] == little[j])
        {
            while(big[i + j] == little[j] && (i + j) < n)
            {
                j++;
                if(little[j] == '\0')
                    return((char *) &big[i]);
            }
        }
        i++;
    }
    return(NULL);
}