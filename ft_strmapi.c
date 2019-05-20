/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:36:15 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 15:05:08 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_string;
	int		i;

	i = -1;
	if (s)
	{
		if ((fresh_string = ft_strdup(s)))
		{
			while (s[++i])
				fresh_string[i] = f(i, s[i]);
		}
		return (fresh_string);
	}
	return (NULL);
}
