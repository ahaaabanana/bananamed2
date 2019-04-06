/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrandpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 11:02:38 by tgrandpa          #+#    #+#             */
/*   Updated: 2019/04/06 11:02:39 by tgrandpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     LIBFT_H
# define    LIBFT_H
# include   <string.h>

void        *ft_memset(void *b, int c, size_t len);
void        ft_bzero(void *s, size_t n);
void        *ft_memcpy(void *dst, void *src, size_t n);
void        *ft_memmove(void *dst, const void *src, size_t len);
void        *ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
