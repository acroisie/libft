/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:54:22 by acroisie          #+#    #+#             */
/*   Updated: 2021/10/19 14:54:22 by acroisie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char	*buff;
	char	*str_src;
	char	*str_dst;
	size_t	i;

	buff = malloc(size * sizeof(char));
	str_src = (char *)src;
	str_dst = (char *)dst;
	i = 0;
	while (i < size)
	{
		buff[i] = str_src[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		str_dst[i] = buff[i];
		i++;
	}
	return (dst);
}
