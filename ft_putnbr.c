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

#include "libprintf.h"

void	ft_putnbr(va_list ap)
{
	unsigned int	nb;
    int n;

    n = va_arg(ap, int);
	nb = n;
	if (n < 0)
	{
        char min = '-';
		write(1, &min, 1);
		nb *= -1;
	}
	if (nb < 10){
        char num = nb + '0';
		write(1, &num, 1);
    }
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}