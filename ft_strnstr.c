/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:44:56 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:41:32 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t srch_len;

	if (!*big)
		return (NULL);
	else if (!*little)
		return (char*)big;
	while (*big && len > 0)
	{
		i = 0;
		srch_len = 0;
		while (big[i] == little[i] && srch_len++ < len)
		{
			i++;
			if (!little[i])
				return (char*)big;
		}
		big++;
		len--;
	}
	return (NULL);
}
