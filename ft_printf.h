/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:26:02 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/07 11:26:05 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putnbr(int n, int *count);
void	ft_putunsigned(unsigned int n, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_puthex(unsigned int nbr, char Xx, int *count);
void	ft_putaddr(void *addr, int *count);

#endif
