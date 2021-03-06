/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:31:11 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/21 14:35:12 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*haystack;

	i = 0;
	haystack = (unsigned char*)s;
	while (i < n)
	{
		if (haystack[i] == (unsigned char)c)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
