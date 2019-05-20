/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:25:29 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 15:00:12 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_string;

	if (!(new_string = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memset(new_string, '\0', size + 1);
	return (new_string);
}
