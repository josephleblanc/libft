/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:08:33 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:50:20 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest && src + n > dest)
	{
		while (n > 0)
		{
			n--;
			((char*)dest)[n] = ((char*)src)[n];
		}
		return (dest + n);
	}
	return (ft_memcpy(dest, src, n));
}
