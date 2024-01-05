/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouatac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:05:35 by rmouatac          #+#    #+#             */
/*   Updated: 2024/01/05 12:05:42 by rmouatac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int handleFlag(char c, va_list ap){
    int count;

    count = 0;
    if(c == 'd')
    {
        ft_putnbr(ap);
    }
    else if(c == '%'){
        write(1, &c, 1);
        count++;
    }
    return count;
}

int ft_printf(const char *format, ...){
    int i;
    int count;
    va_list ap;

    count = 0;
    i = 0;
    va_start(ap, format);
    while (format[i]){
        if (format[i] == '%'){
            i++;
            handleFlag(format[i], ap);
            i++;
        }
        write(1, &format[i], 1);
        i++; 
        count++;
    }
    va_end(ap);
    return (count);
}
