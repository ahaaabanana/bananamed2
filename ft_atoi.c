/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:41:10 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/03/05 22:42:21 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	long nb;
	long s;

	i = 0;
	nb = 0;
	s = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
				|| str[i] == '\r' || str[i] == '\f' || str[i] == '	'
				|| str[i] == '\n'))
		i++;
	if (str[i] != '\0')
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				s = -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return ((int)(nb * s));
}

/* int		ft_isspace(int c)
{
	return (c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f' ||
			c == '\r' ||
			c == ' ');
}

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(const char *str)
{
	unsigned long	result;
	unsigned long	border;
	size_t			i;
	int				sign;

	result = 0;
	border = (unsigned long)(FT_LONG_MAX / 10);
	printf("%ld\n", border);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if ((result > border || (result == border && (str[i] - '0') > 7))
															&& sign == 1)
			return (-1);
		else if ((result > border || (result == border && (str[i] - '0') > 8))
																&& sign == -1)
			return (0);
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)(result * sign));
}

int		main()
{
	// int long x;
	// long long x;
	// x = 922337203685477580823;
	// printf("x = %d\n", x);

	printf("%lu\n", FT_ULONG_MAX);
	printf("%ld\n", FT_LONG_MAX);
	printf("x = %d\n", ft_atoi("922337203685477580923"));
	printf("a = %d\n", atoi("922337203685477581"));
	printf("%d\n", (5 >> 1));
}
 */