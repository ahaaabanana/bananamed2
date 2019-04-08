/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:14:44 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/08 18:14:46 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return ('a' + c - 'A');
    return (c);
}

//not down still memccpy, memmove, memchr, memcmp, strlcat, strnstr, atoi;