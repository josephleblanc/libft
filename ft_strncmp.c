/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:05:07 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/15 08:14:49 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*re_s1;
	unsigned char	*re_s2;

	re_s1 = (unsigned char*)s1;
	re_s2 = (unsigned char*)s2;
	while (*re_s1 && *re_s2 && *re_s1 == *re_s2 && n != 0)
	{
		re_s1++;
		re_s2++;
		n--;
	}
	if (n == 0)
		return (0);
	if (*re_s1 > *re_s2)
		return (1);
	else if (*re_s1 < *re_s2)
		return (-1);
	else
		return (0);
}
