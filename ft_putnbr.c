#include "libft.h"

void    ft_putnbr(int n)
{
    int z;
	int x;
	int y;

	z = 1;
	y = n;
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
			n /= 10;
		n *= (-1);
	}
	x = n;
	while ((n /= 10) != 0)
		z *= 10;
	while (z != 0)
	{
		ft_putchar((x / z) + '0');
		x = x - (x / z) * z;
		z /= 10;
	}
	if (y == -2147483648)
		ft_putchar('8');
}