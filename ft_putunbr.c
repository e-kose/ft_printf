/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:26:13 by ekose             #+#    #+#             */
/*   Updated: 2023/11/02 13:09:56 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, unsigned int *len)
{
	if (n > 9)
	{
		ft_putunbr(n / 10, len);
		ft_putchar((n % 10) + '0', len);
	}
	else
		ft_putchar(n % 10 + '0', len);
}
