/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:02:46 by ekose             #+#    #+#             */
/*   Updated: 2023/11/02 13:19:44 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(va_list args, const char *str, unsigned int *len)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(args, const char *), len);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*str == 'u')
		ft_putunbr(va_arg(args, unsigned int), len);
	else if (*str == 'x' || *str == 'X')
		ft_puthexa(va_arg(args, unsigned int), len, str);
	else if (*str == 'p')
	{
		*(len) += write(1, "0x", 2);
		ft_phexa(va_arg(args, unsigned long), len);
	}
	else if (*str == '%')
		*len += write(1, "%", 1);
	else
		*len += write(1, str, 1);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	len;
	unsigned int	i;
	va_list			argumans;

	va_start(argumans, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			ft_check(argumans, &format[i + 1], &len);
			i++;
		}
		else
			if (format[i] != '%')
				ft_putchar(format[i], &len);
		i++;
	}
	va_end(argumans);
	return (len);
}
