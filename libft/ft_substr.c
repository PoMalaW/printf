#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *sub;

    i = 0;
    if(!s)
        return(NULL);
    if(start >= ft_strlen(s))
        return((char *)ft_calloc(1, sizeof(char)));
    if(ft_strlen(s) <= start + len)
        sub = malloc(sizeof * sub * (ft_strlen(s) - start + 1));
    else
        sub = malloc(sizeof * sub * (len + 1));
    if(sub == NULL)
        return(NULL);
    while(s[start] && i < len)
    {
        
        sub[i] = s[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return(sub);
}