/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:49:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/05 08:51:24 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)str;
	while (i < n)
	{
		if (st[i] == (unsigned char) c)
			return ((void *)&st[i]);
		i++;
	}
	return (0);
}
