/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:14:54 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:35:45 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	end;
	size_t	final;

	src_len = ft_strlen(src);
	end = ft_strlen(dest);
	final = end + src_len;
	while (end < final && n != 0)
	{
		dest[end++] = *src;
		src++;
		n--;
	}
	dest[end] = '\0';
	return (dest);
}
