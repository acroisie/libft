/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:40:38 by acroisie          #+#    #+#             */
/*   Updated: 2021/11/05 09:54:35 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	within_start(const char *str, const char *set)
{
	int	i;
	int	stop;

	i = 0;
	stop = ft_strlen(set);
	while (i < stop)
	{
		if (str[i] != set[i])
			return (0);
		i++;
	}
	return (1);
}

static int	within_end(const char *str, const char *set)
{
	int	i;
	int	stop;

	i = ft_strlen(str);
	stop = ft_strlen(set);
	while (stop > 0)
	{
		if (str[i] != set[stop])
			return (0);
		i--;
		stop--;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		sub_to_len;
	int		set_len;
	int		nstr_len;
	char	*new_string;

	i = 0;
	sub_to_len = 0;
	set_len = ft_strlen(set);
	if (within_start(s1, set))
		sub_to_len = set_len;
	if (within_end(s1, set))
		sub_to_len = sub_to_len + set_len;
	nstr_len = ft_strlen(s1) - sub_to_len;
	new_string = malloc((nstr_len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (i < nstr_len)
	{
		new_string[i] = s1[set_len];
		set_len++;
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
