/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:54:12 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/08 08:37:46 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;
	char	x;

	ptr = (char *)str;
	x = (char)c;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == x)
			return ((char *)(ptr + i));
		i++;
	}
	if (x == '\0')
		return ((char *)(ptr + i));
	return (NULL);
}
