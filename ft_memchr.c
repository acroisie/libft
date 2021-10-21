/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:57:07 by acroisie          #+#    #+#             */
/*   Updated: 2021/10/19 14:57:07 by acroisie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	char	*str_mb;
	size_t	i;

	str_mb = (char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (*str_mb == (char)searchedChar)
			return ((void *)&str_mb[i]);
		i++;
	}
	return (NULL);
}
