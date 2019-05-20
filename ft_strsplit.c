/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:42:25 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/15 09:32:07 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wc(char const *s, char c)
{
	int	pres;
	int	fut;
	int	wc;

	pres = 0;
	fut = 1;
	wc = 0;
	if (s[pres] != c)
		wc++;
	while (s[fut])
	{
		if (s[pres] == c && s[fut] != c)
			wc++;
		pres++;
		fut++;
	}
	return (wc);
}

static size_t	word_length(const char *s, size_t start, char c)
{
	size_t end;

	end = start;
	while (s[end] != c && s[end])
		end++;
	return (end - start);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	pres;
	size_t	fut;
	char	**word_array;
	size_t	array_i;

	if (!s || !c)
		return (NULL);
	pres = 0;
	fut = pres + 1;
	array_i = 0;
	if (!(word_array = (char**)malloc((ft_wc(s, c) + 1) * sizeof(char*))))
		return (NULL);
	if (s[0] != c)
		word_array[array_i++] = ft_strsub(s, 0, word_length(s, 0, c));
	while (s[pres] && s[fut])
	{
		if (s[pres] == c && s[fut] != c)
			word_array[array_i++] = ft_strsub(s, fut, word_length(s, fut, c));
		pres++;
		fut++;
	}
	word_array[array_i] = NULL;
	return (word_array);
}
