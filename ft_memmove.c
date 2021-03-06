/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:04:58 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/22 09:57:24 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*srccpy;
	unsigned char	*dstcpy;

	srccpy = (unsigned char*)src;
	dstcpy = (unsigned char*)dst;
	if (srccpy < dstcpy)
	{
		while (len--)
			dstcpy[len] = srccpy[len];
	}
	else
		ft_memcpy(dstcpy, srccpy, len);
	return (dstcpy);
}
