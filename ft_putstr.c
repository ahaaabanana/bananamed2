#include "libft.h"

void    ft_putstr(char const *s)
{
    size_t i;

    if (!s)
        return ;
    i = 0;
    while (s[i])
        ft_putchar(s[i++]);
}