/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:00:18 by kmumm             #+#    #+#             */
/*   Updated: 2021/10/04 20:14:33 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			index;

	index = (size_t) 0;
	destination = dst;
	source = (unsigned char *) src;
	while (index < n)
	{
		destination[index] = source[index];
		++index;
	}
	return (dst);
}
