/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:55:57 by acroisie          #+#    #+#             */
/*   Updated: 2021/11/09 20:00:55 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count++;
	if (num < 0)
	{
		count++;
		num = num * (-1);
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		sign;

	len = num_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	sign = 0;
	if (n < 0)
	{
		n = n * -1;
		sign = -1;
	}
	while ((--len) >= 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-645636));
	return (0);
}
*/