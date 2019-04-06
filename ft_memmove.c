/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:40:46 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/06 12:40:48 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    size_t  l;
    size_t  x;
    
    x = dst - src;
    i = 0;
    l = 0;
    while (i < len)
    {
        if ((src + i) == dst)
        {
            l = 1;
            break ;
        }
        i++;
    }
    i = 0;
    if (l)
    {
        while (i < len - x)
        {
            ((unsigned char*)dst + x)[i] = ((unsigned char*)dst)[i];
            i++;
        }
        len = x;
    }
    i = 0;
    while (i < len)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return (dst);
}


