/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:55:20 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/05 08:50:39 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	seet(char c, const char*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*check(char const *s1, char const *set)
{
	char	*p;

	if (!set && s1)
	{
		p = ft_strdup(s1);
		return (p);
	}
	if (!s1)
		return (0);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*alloc;

	start = 0;
	if (!s1 || !set)
		return (check(s1, set));
	end = ft_strlen(s1);
	while (s1 && seet(s1[start], set))
		start++;
	while (end > start && seet(s1[end - 1], set))
		end--;
	alloc = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!alloc)
		return (NULL);
	i = 0;
	while (start < end)
	{
		alloc[i] = s1[start];
		i++;
		start++;
	}
	alloc[i] = '\0';
	return (alloc);
}
