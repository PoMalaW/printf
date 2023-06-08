#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    size_t s1len;
    size_t s2len;
    size_t len;
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if(!s1 || !s2)
        return(NULL);
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    len = s1len + s2len;
    new = (char *)malloc((len + 1) * sizeof * new);
    if(new == NULL)
        return(0);
    while(i < s1len)
    {
        new[i] = s1[i];
        i++;
    }
    while(i + j < len)
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return(new);
}