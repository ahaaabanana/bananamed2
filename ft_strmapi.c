#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t strsize;

    strsize = ft_strlen(s);
    str = (char*)malloc(sizeof(*str) * strsize + 1);
    if (str)
    {
        str[strsize] = '\0';
        while (strsize)
        {
            strsize--;
            str[strsize] = f(strsize,s[strsize]);
        }
    }
    return (str);
}