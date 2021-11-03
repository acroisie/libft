/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:21:16 by acroisie          #+#    #+#             */
/*   Updated: 2021/11/03 09:22:21 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t elementCount, size_t elementSize)
{
	void	*ptr;

	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, elementCount);
	return (ptr);
}
