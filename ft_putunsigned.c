/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:06:15 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/07 12:06:18 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n, int *count)
{
	if (n < 10)
		ft_putchar(n + '0', count);
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
