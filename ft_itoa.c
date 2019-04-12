#include "libft.h"

char        *ft_itoa(int n)
{
    char    *x;
    int     size;
    long long nb;

    size = 1;
    nb = n;
    if (n < 0)
        size++;
    while (n /= 10)
        size++;
    if (!(x = ft_strnew(size)))
        return (NULL);
    if (nb < 0)
    {
        x[0] = '-';
        nb = -nb;
    }
    if (!nb)
        x[--size] = nb % 10 + '0';
    while (nb)
    {
        x[--size] = nb % 10 + '0';
        nb /= 10;
    }
    return (x);
}

/* int         main()
{
    char *s;
    s = ft_itoa(-1234);
    printf("%s\n", s);
} */
