/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 11:39:29 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:27:15 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	mag;

	if (n > 0)
		n = n * -1;
	else if (n == 0)
		ft_putchar_fd('0', fd);
	else
		ft_putchar_fd('-', fd);
	mag = -1000000000;
	while (mag < n)
		mag /= 10;
	while (mag < 0)
	{
		ft_putchar_fd(n / mag + '0', fd);
		n = (n % (mag * -1));
		mag /= 10;
	}
}
