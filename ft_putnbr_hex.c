/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:09 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:09:22 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_hex(unsigned int nb, char c)
{
	int	total;

	total = 0;
	if (nb >= 16)
	{
		total = total + ft_putnbr_hex(nb / 16, c);
		total = total + ft_putnbr_hex(nb % 16, c);
	}
	else
	{
		if (nb >= 10)
		{
			if (c == 'x')
				total = total + ft_putchar((nb - 10) + 'a');
			else if (c == 'X')
				total = total + ft_putchar((nb - 10) + 'A');
		}
		if (nb <= 9)
			total = total + ft_putchar(nb + '0');
	}
	return (total);
}
