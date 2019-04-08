/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memaloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:23:31 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/08 18:23:32 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memalloc(size_t size)
{
    void *fm;
    size_t i;

    i = 0;
    fm = (unsigned char*)malloc(sizeof(unsigned char) * size);
    if (fm)
        while (i < size)
            ((unsigned char*)fm)[i++] = 0;
    if (fm)
        return (fm);
    return (NULL);
}