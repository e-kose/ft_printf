/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:26:13 by ekose             #+#    #+#             */
/*   Updated: 2023/10/29 14:00:57 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, unsigned int *len)
{
	char	rs;

	if (n > 9)
	{
		ft_putunbr(n / 10, len);
		rs = (n % 10) + '0';
		ft_putchar(rs, len);
	}
	else
	{
		rs = n % 10 + '0';
		ft_putchar(rs, len);
	}
}
