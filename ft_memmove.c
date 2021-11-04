/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:39:15 by acroisie          #+#    #+#             */
/*   Updated: 2021/11/03 09:39:15 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	free(buff);
	return (dst);
}
