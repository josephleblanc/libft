/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:12:22 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:31:13 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string;
	int		length;
	int		i;

	i = -1;
	length = ft_strlen(s);
	if (!(new_string = (char*)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (s[++i])
		new_string[i] = s[i];
	new_string[length] = '\0';
	return (new_string);
}
