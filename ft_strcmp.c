/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 09:56:43 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/15 08:33:54 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*re_s1;
	unsigned char	*re_s2;

	re_s1 = (unsigned char*)s1;
	re_s2 = (unsigned char*)s2;
	while (*re_s1 && *re_s2 && *re_s1 == *re_s2)
	{
		re_s1++;
		re_s2++;
	}
	if (*re_s1 > *re_s2)
		return (1);
	else if (*re_s1 < *re_s2)
		return (-1);
	else
		return (0);
}
