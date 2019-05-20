/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 18:05:21 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:42:09 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*p;

	p = (char*)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (p[len] == c)
			return (p + len);
		len--;
	}
	return (NULL);
}
