/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:39:44 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:49:50 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*re_dest;
	char	*re_src;

	re_dest = dest;
	re_src = (char*)src;
	while (n-- > 0)
		*re_dest++ = *re_src++;
	return (dest);
}
