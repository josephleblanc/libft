/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:49:06 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 15:24:02 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*re_dest;
	unsigned char	*re_src;

	re_dest = dest;
	re_src = (unsigned char *)src;
	while (n-- >= 1)
	{
		if (ft_memcmp(re_src, &c, 1) == 0)
		{
			*re_dest = *re_src;
			return (++re_dest);
		}
		*re_dest = *re_src;
		re_dest++;
		re_src++;
	}
	return (NULL);
}
