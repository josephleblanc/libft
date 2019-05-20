/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:32:50 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:34:53 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	i = -1;
	if (s)
	{
		if ((new_str = ft_strdup(s)))
		{
			while (new_str[++i])
				new_str[i] = f(new_str[i]);
		}
		return (new_str);
	}
	return (NULL);
}
