#include "libft.h"

void    ft_strclr(char *s)
{
    size_t strsize;

    if (s)
    {
        strsize = ft_strlen(s);
        while(strsize)
            s[--strsize] = '\0';
    }
}