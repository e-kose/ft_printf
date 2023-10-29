/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:16:23 by ekose             #+#    #+#             */
/*   Updated: 2023/10/29 13:55:01 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, unsigned int *len)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else
		ft_putchar(n + '0', len);
}
