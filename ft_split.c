/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:27:49 by acroisie          #+#    #+#             */
/*   Updated: 2021/11/08 18:25:02 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	detect_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static	int	word_count(char const *str, char sep)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (str[i])
	{
		if ((detect_sep(str[i - 1], sep) && (!detect_sep(str[i], sep ))|| i - 1 == 0))
				// || str[i] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	tab = malloc((word_count(s, c) * sizeof(char *) + 1));
	while (s[i])
	{
		
	}
	return (tab);
}
