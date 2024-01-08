/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:58:59 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/06 13:59:04 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	if (s == NULL)
		ft_putstr("(null)", count);
	while (s && *s)
	{
		ft_putchar(*s, count);
		s++;
	}
}
