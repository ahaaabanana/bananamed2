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
	unsigned long i;
	unsigned long nb;
	int s;

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
	return (nb * s);
}

/* int		main()
{
	int long x;
	printf("%ld", ft_atoi("-999999999999999999999"));
} */
