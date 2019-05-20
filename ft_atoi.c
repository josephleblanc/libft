/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:07:36 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:10:59 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	out;
	int		neg;

	out = 0;
	neg = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' || *nptr == '\r' \
			|| *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
		neg = 1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while ('0' <= *nptr && *nptr <= '9' && *nptr)
	{
		out = out * 10 + (*nptr - '0');
		nptr++;
	}
	if (out == 2147483648 && neg == 1)
		return (-2147483648);
	else if (neg == 1)
		return (-1 * out);
	else
		return (out);
}
