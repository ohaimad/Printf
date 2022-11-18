/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:41:15 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:13:29 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	added(va_list args, char c)
{
	int	j;

	j = 0;
	if (c == 'c')
		j = j + ft_putchar(va_arg(args, int));
	else if (c == 's')
		j = j + ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		j = j + print_adresse(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		j = j + ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		j = j + ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		j = j + ft_putnbr_hex(va_arg(args, unsigned int), c);
	else
		j = j + ft_putchar(c);
	return (j);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	pa;

	va_start(pa, s);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%' && !s[i + 1])
			break ;
		if (s[i] == '%')
		{
			i++;
			count = count + added(pa, s[i]);
		}
		else
			count = count + ft_putchar(s[i]);
		i++;
	}
	va_end(pa);
	return (count);
}
// int main()
// {
// 	ft_printf("%d\n", ft_printf("%s", "123456"));
// }