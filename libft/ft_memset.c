/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:32:18 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/05 23:52:49 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*st;
	size_t			i;

	st = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (st);
}
