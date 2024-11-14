/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:15:04 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/11/05 08:51:56 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = size * count;
	if (size != 0 && i / size != count)
		return (NULL);
	p = malloc(i);
	if (!p)
		return (NULL);
	ft_bzero(p, i);
	return (p);
}
