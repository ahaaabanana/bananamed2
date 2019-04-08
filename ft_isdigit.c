/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:24:47 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/08 17:24:48 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

