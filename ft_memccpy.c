/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:02:50 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/06 18:02:52 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *s1;
    unsigned char *s2;

    i = 0;
    s1 = (unsigned char*)dst;
    s2 = (unsigned char*)src;
    while (i < n)
    {
        s1[i] = s2[i];
        if (s2[i] == (unsigned char)c)
            return (dst);
        i++;
    }
    return (NULL);
}
