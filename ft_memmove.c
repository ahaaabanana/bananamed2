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
    size_t  b;
    char    *x1;
    char    *x2;

    i = 0;
    b = dst - src;
    x1 = (char*)dst;
    x2 = (char*)src;
    if (src < dst && len > b)
    {
        while (i < len - b)
        {
            x1[len - 1 - i] = x1[len - b - 1 - i];
            i++;
        }
        len = b;
        i = 0;
    }
    while (i < len)
    {
        x1[i] = x2[i];
        i++;
    }
    return (dst);
}

/* int         main()
{
    char src[] = "armagedon-1";
    char srz[] = "armagedon-1";
    char dst[12];
    // ft_memmove(src + 4, src + 1, 20);
    memmove(srz + 4, srz + 1, 20);
    // printf("ft=%s\n", src);
    printf("lc=%s\n", srz);
} */

/* OLD CODE
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
*/

