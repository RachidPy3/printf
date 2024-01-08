/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:22:41 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/07 11:22:49 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_flags(va_list ap, const char format, int *count)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (format == 'x' || format == 'X')
		ft_puthex(va_arg(ap, int), format, count);
	else if (format == 'u')
		ft_putunsigned(va_arg(ap, unsigned int), count);
	else if (format == 'c')
		ft_putchar((char)va_arg(ap, int), count);
	else if (format == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (format == '%')
		ft_putchar(format, count);
	else if (format == 'p')
		ft_putaddr(va_arg(ap, void *), count);
}
<<<<<<< HEAD

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_flags(ap, *format, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}
=======
>>>>>>> 9dbf6a490450bde8059ff6dd0eb7bf9981974815
