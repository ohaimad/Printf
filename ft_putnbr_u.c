/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:22:35 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:09:26 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	total;

	total = 0;
	if (nb >= 0 && nb <= 9)
		total = total + ft_putchar(nb + '0');
	else
	{
		total = total + ft_putnbr(nb / 10);
		total = total + ft_putnbr(nb % 10);
	}
	return (total);
}
