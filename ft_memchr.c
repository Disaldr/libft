/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:59:47 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/05 21:09:55 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*string;

	string = (char *) s;
	index = 0;
	while (string[index] != c && index < n)
		++index;
	if (index == n)
		return (NULL);
	if (string[index] == c)
		return ((void *) string + index);
	return (NULL);
}
