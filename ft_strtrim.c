/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:46:41 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/20 13:40:14 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char	*fresh_str;
	int		end;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (end >= 0 && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
	while (end >=  0 && (*s == ' ' || *s == '\t' || *s == '\n'))
	{
		s++;
		end--;
	}
	if (!(fresh_str = (char*)malloc(++end + 1)))
		return (NULL);
	if (end == 1)
		end--;
	ft_memset(fresh_str, 'a', end);
	ft_strncpy(fresh_str, s, end);
	fresh_str[end] = '\0';
	return (fresh_str);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	static char **tt;
//	tt = ft_strsplit("", '*');
//	if (tt &&  tt[0] == NULL)
//		printf("No problem");
//	else
//		printf("Problem");
//}
