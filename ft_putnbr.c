/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:12:50 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:27:27 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	mag;

	if (n > 0)
		n = n * -1;
	else if (n == 0)
		ft_putchar('0');
	else
		ft_putchar('-');
	mag = -1000000000;
	while (mag < n)
		mag /= 10;
	while (mag < 0)
	{
		ft_putchar(n / mag + '0');
		n = (n % (mag * -1));
		mag /= 10;
	}
}
