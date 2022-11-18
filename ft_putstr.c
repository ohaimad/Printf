/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:16:11 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:09:34 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		total += 6;
	}
	else
	{
		while (s[i])
		{
			total = total + ft_putchar(s[i]);
			i++;
		}
	}
	return (total);
}
