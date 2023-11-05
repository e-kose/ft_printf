/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:27:01 by ekose             #+#    #+#             */
/*   Updated: 2023/10/29 16:17:21 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, unsigned int *len)
{
	int	i;

	if (!str)
	{
		*(len) += write(1, "(null)", 6);
		return ;
	}
	i = 0;
	while (str[i])
		ft_putchar(str[i++], len);
}
