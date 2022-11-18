/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:32:43 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:09:30 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int nb)
{
	int	total;

	total = 0;
	if (nb == -2147483648)
	{
		total = total + ft_putchar('-');
		total = total + ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		total = total + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
		total = total + ft_putchar(nb + '0');
	else
	{
		total = total + ft_putnbr(nb / 10);
		total = total + ft_putnbr(nb % 10);
	}
	return (total);
}
