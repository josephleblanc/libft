/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:59:16 by joleblan          #+#    #+#             */
/*   Updated: 2019/05/14 14:59:01 by joleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	i;

	i = c + 0;
	if (c < 0 || 128 <= c)
		return (0);
	else
		return (1);
}
