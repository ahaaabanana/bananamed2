#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t strsize;

    if (s && f)
    {
        strsize = ft_strlen(s);
        while (strsize)
        {
            strsize--;
            f(strsize, s + strsize);
        }
    }
}