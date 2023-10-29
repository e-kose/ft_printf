/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:34:34 by ekose             #+#    #+#             */
/*   Updated: 2023/10/29 14:27:07 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, unsigned int *len, const char *str)
{
	char	*s;
	char	*t;

	s = "0123456789abcdef";
	t = "0123456789ABCDEF";
	if (*str == 'x')
	{
		if (n > 16)
		{
			ft_puthexa(n / 16, len, str);
			len += write(1, &s[n % 16], 1);
		}
		else
			len += write(1, &s[n % 16], 1);
	}
	else
	{
		if (n > 16)
		{
			ft_puthexa(n / 16, len, str);
			len += write(1, &t[n % 16], 1);
		}
		else
			len += write(1, &t[n % 16], 1);
	}
}

void	ft_phexa(unsigned long n, unsigned int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (n > 16)
	{
		ft_phexa(n / 16, len);
		len += write(1, &s[n % 16], 1);
	}
	else
		len += write(1, &s[n % 16], 1);
}
