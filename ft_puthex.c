/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:43:23 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/07 11:43:30 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char Xx, int *count)
{
	char			*base;

	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(base[nbr], count);
	else
	{
		ft_puthex(nbr / 16, Xx, count);
		ft_puthex(nbr % 16, Xx, count);
	}
}
