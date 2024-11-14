/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:31:08 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/08 09:03:57 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigg, const char *little, size_t len)
{
	size_t	i;
	size_t	p;

	i = 0;
	if (!little[0])
		return ((char *)bigg);
	while (bigg[i] && i < len)
	{
		p = 0;
		while (bigg[i + p] == little[p] && (p + i) < len)
		{
			if (!little[p + 1])
				return ((char *)&bigg[i]);
			p++;
		}
		i++;
	}
	return (NULL);
}
