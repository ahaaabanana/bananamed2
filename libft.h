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
# include   <bsd/string.h>
# include   <stdio.h>

void        *ft_memset(void *b, int c, size_t len);
void        ft_bzero(void *s, size_t n);
void        *ft_memcpy(void *dst, void *src, size_t n);
void        *ft_memmove(void *dst, const void *src, size_t len);
void        *ft_memccpy(void *dst, const void *src, int c, size_t n);
void        *ft_memchr(const void *s, int c, size_t n);
int         ft_memcmp(const void *s1, const void *s2, size_t n);
size_t      ft_strlen(const char *s);
char        *ft_strcpy(char *dest, const char *src);
char        *ft_strncpy(char *dest, const char *src, size_t n);
char        *ft_strcat(char *dest, const char *src);
char        *ft_strncat(char *dest, const char *src, size_t n);
size_t      ft_strlcat(char *dst, const char *src, size_t size);
char        *ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
char        *ft_strstr(const char *haystack, const char *needle);

#endif
