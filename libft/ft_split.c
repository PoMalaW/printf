#include "libft.h"

size_t  ft_arrayLen(char const *s, char c)
{
    size_t len;
    size_t i;

    len = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] == c)
        {
            while(s[i] && s[i] == c)
                i++;
        }
        else
        {
            len++;
            while(s[i] && s[i] != c)
                i++;
        }
    }
    return len;
}


char    **ft_split(char const *s, char c)
{
    char    **array;
    size_t  i;
    size_t  j;
    size_t  start;

    i = 0;
    j = 0;
    start = 0;
    if(!s)
        return NULL;
    array = malloc((ft_arrayLen(s,c) + 1) * sizeof(char *));
    if(array == NULL)
        return NULL;
    while(s[i])
    {
        while(s[i] == c)
            i++;
        if(s[i] == '\0')
            break;
        start = i;
        while(s[i] && s[i] != c)
            ++i;
        array[j++] = ft_substr(s,start, i - start);
    }
    array[j] = '\0';
    return array;
}