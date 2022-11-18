/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:36:54 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:09:08 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_lines(unsigned long n)
{
	int	j;

	j = 0;
	while (n > 0)
	{
		n = n / 16;
		j++;
	}
	return (j);
}

static unsigned long	ft_adresse(unsigned long nb)
{
	unsigned long	n;

	n = nb;
	if (nb >= 16)
	{
		ft_adresse(nb / 16);
		ft_adresse(nb % 16);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putchar((nb - 10) + 'a');
		}
		else if (nb <= 9)
			ft_putchar(nb + '0');
	}
	return (ft_lines(n));
}

int	print_adresse(unsigned long nb)
{
	int	i;

	i = ft_putstr("0x");
	i = i + ft_lines(nb);
	ft_adresse(nb);
	if (nb == 0)
		return (3);
	return (i);
}
