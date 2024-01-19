/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:24:53 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/07 12:24:56 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putaddrhex(unsigned long nbr, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(base[nbr], count);
	else
	{
		ft_putaddrhex(nbr / 16, count);
		ft_putaddrhex(nbr % 16, count);
	}
}

void	ft_putaddr(void *addr, int *count)
{
	unsigned long	ptr;

	ptr = (unsigned long)addr;
	ft_putstr("0x", count);
	ft_putaddrhex(ptr, count);
}
