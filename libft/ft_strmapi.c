/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:44:32 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/05 08:50:47 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	size_t			i;
	unsigned int	l;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	p = (void *) malloc(sizeof(char ) * (i + 1));
	if (!p)
		return (0);
	l = 0;
	while (l < i)
	{
		p[l] = f(l, s[l]);
		l++;
	}
	p[l] = '\0';
	return (p);
}
