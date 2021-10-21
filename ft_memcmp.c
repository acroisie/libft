/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:46:39 by acroisie          #+#    #+#             */
/*   Updated: 2021/10/19 16:46:39 by acroisie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str_s1;
	char	*str_s2;

	i = 0;
	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	while (i < n)
	{
		if ((str_s1[i] - str_s2[i]) != 0)
			return (str_s1[i] - str_s2[i]);
		i++;
	}
	return (0);
}
