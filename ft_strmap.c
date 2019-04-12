#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
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
            str[strsize] = f(s[strsize]);
        }
    }
    return (str);
}