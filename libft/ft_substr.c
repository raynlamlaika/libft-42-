/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:48:27 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/05 08:50:30 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (i - start < len)
		len = i - start;
	string = (char *)malloc((1 + len) * sizeof(char));
	if (!string)
		return (NULL);
	i = 0;
	while (s[start] && len > 0)
	{
		string[i++] = s[start++];
		len--;
	}
	string[i] = '\0';
	return (string);
}
