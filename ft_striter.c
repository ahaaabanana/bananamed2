#include "libft.h"

void    ft_striter(char *s, void (*f)(char*))
{
    size_t strsize;

    if (s && f)
    {
        strsize = ft_strlen(s);
        while (strsize)
            f(s + (--strsize));
    }
}