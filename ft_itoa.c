/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 14:14:45 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 16:06:46 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_places(long long_n)
{
	long	mag;
	int		places;
	int		neg;

	neg = 0;
	if (long_n < 0)
	{
		neg = 1;
		long_n = -1 * long_n;
	}
	mag = 1;
	places = 1;
	while (long_n > mag * 10)
	{
		if (long_n / mag != 0)
			mag *= 10;
		places++;
	}
	if (neg == 1)
		places++;
	return (places);
}

char		*ft_itoa(int n)
{
	char	*output;
	int		places;
	int		neg;
	long	long_n;

	long_n = n;
	neg = 0;
	places = find_places(long_n);
	if (n < 0)
	{
		neg = 1;
		long_n = -1 * long_n;
	}
	if (!(output = (char*)malloc((places + 1) * sizeof(char))))
		return (NULL);
	output[places] = '\0';
	while ((places != 0 && neg == 0) || (places != 1 && neg == 1))
	{
		places--;
		output[places] = long_n % 10 + '0';
		long_n = long_n / 10;
	}
	if (neg == 1)
		output[0] = '-';
	return (output);
}
