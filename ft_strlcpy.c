/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:46:08 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/04 22:48:31 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_index;

	src_index = 0;
	if (dstsize == 0)
	{
		while (src[src_index])
			++src_index;
		return (src_index);
	}
	while (src_index < dstsize - 1 && src[src_index])
	{
		dst[src_index] = src[src_index];
		src_index++;
	}
	dst[src_index] = '\0';
	while (src[src_index])
		++src_index;
	return (src_index);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include "libft.h"

// void			ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }

// static void		check_strlcpy(char *dest, char *src, int size, int dest_len)
// {
// 	ft_print_result(strlcpy(dest, src, size));
// 	write(1, "\n", 1);
// 	write(1, dest, dest_len);
// 	free(dest);
// }

// int				main(int argc, const char *argv[])
// {
// 	char	*dest;
// 	int		arg;
// 	int		dest_len;

// 	alarm(5);
// 	dest_len = 15;
// 	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
// 		return (0);
// 	memset(dest, 0, dest_len);
// 	memset(dest, 'r', 6);
// 	if ((arg = atoi(argv[1])) == 1)
// 		check_strlcpy(dest, "lorem", 15, dest_len);
// 	else if (atoi(argv[1]) == 2)
// 		check_strlcpy(dest, "", 15, dest_len);
// 	else if (atoi(argv[1]) == 3)
// 		check_strlcpy(dest, "lorem ipsum", 3, dest_len);
// 	else if (atoi(argv[1]) == 4)
// 		check_strlcpy(dest, "lorem ipsum dolor sit amet", 15, dest_len);
// 	else if (atoi(argv[1]) == 5)
// 		check_strlcpy(dest, "lorem ipsum dolor sit amet", 0, dest_len);
// 	return (0);
// }
