/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:53:28 by ekose             #+#    #+#             */
/*   Updated: 2023/11/01 13:34:03 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_puthexa(unsigned int n, unsigned int *len, const char *str);
void	ft_check(va_list args, const char *str, unsigned int *len);
void	ft_putnbr(int n, unsigned int *len);
void	ft_putstr(const char *str, unsigned int *len);
void	ft_putunbr(unsigned int n, unsigned int *len);
void	ft_phexa(unsigned long n, unsigned int *len);
void	ft_putchar(char c, unsigned int *len);

#endif
