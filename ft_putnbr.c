/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:14:01 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/05 13:14:04 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;
<<<<<<< HEAD

	nb = n;
	if (n < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0', count);
	else
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
=======
    	int n;

    	n = va_arg(ap, int);
	nb = n;
	if (n < 0)
	{
        	char min = '-';
		write(1, &min, 1);
		nb *= -1;
	}
	if (nb < 10)
	{
        	char num = nb + '0';
		write(1, &num, 1);
>>>>>>> 9dbf6a490450bde8059ff6dd0eb7bf9981974815
	}
}
