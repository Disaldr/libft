/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:32:41 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/05 22:46:16 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int				ft_isalpha(int symbol);
int				ft_isdigit(int symbol);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t length);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *restrict dst,
					const void *restrict src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *restrict dst,
					const char *restrict src, size_t dstsize);
size_t			ft_strlcat(char *restrict dst,
					const char *restrict src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*strnstr(const char *haystack, const char *needle, size_t len);

#endif