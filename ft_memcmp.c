/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 08:11:45 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/15 08:19:04 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*re_s1;
	unsigned char	*re_s2;

	re_s1 = (unsigned char*)s1;
	re_s2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	if (*re_s1 != *re_s2 && n > 0)
		return (*re_s1 - *re_s2);
	while (n != 0 && --n > 0 && *(++re_s1) == *(++re_s2))
		;
	return (*re_s1 - *re_s2);
}
