/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:08:55 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/18 17:09:03 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<string.h>
# include<unistd.h>
# include<stdarg.h>
# include<limits.h>

int	ft_putchar(char c);
int	ft_printf(const char *s, ...);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_putnbr_hex(unsigned int nb, char c);
int	print_adresse(unsigned long nb);
int	ft_putnbr_u(unsigned int nb);

#endif