/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:29:41 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/20 09:17:30 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *chr;
	unsigned char stupid_c;

	stupid_c = (unsigned char)c;
	if (!s)
		return (NULL);
	chr = (unsigned char*)s;
	while (*chr != stupid_c && n-- - 1 > 0)
		chr++;
	if (*chr == stupid_c)
		return (chr);
	return (NULL);
}
