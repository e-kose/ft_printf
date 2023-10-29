/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:02:46 by ekose             #+#    #+#             */
/*   Updated: 2023/10/29 14:47:38 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_check(va_list args, const char *str, unsigned int *len)
{
	if (*str == 'c')
		len += write(1, &str, 1);
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
		len += write(1, "0X", 2);
		ft_phexa(va_arg(args, unsigned long), len);
	}
}

int	ft_printf(const char *format, ...)
{
	unsigned int	len;
	unsigned int	i;
	va_list			argumans;

	if (format == NULL)
		return (0);
	va_start(argumans, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				len += write(1, "%", 1);
			else
				ft_check(argumans, &format[i + 1], &len);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(argumans);
	return (len);
}
int main()
{
	char a = 'a';
	// ft_printf("Lai %d %s %p %c",a,"ayse",&a,'a');
	// printf("\nLai %d %s %p %c",a,"ayse",&a,'a');
	ft_printf("%c",a);
}
