/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:32:01 by afodil-c          #+#    #+#             */
/*   Updated: 2024/12/02 14:52:58 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args(char c, va_list args, int i)
{
	if (c == 'c')
        ecrire un caractere
    else if (c == 's')
        ft_putstr
    else if (c == 'p')
        ft_putnbr_base
    else if (c == 'd' || c == 'i')
        ft_putnbr
    else if (c == 'u')
        ft_putnbr mais unsigned
    else if (c == 'x')
        ft_putnbr_base
    else if (c == 'X')
        ft_putnbr_base
    else if (c == '%')
        ft_putchar('%')
    va_end(args);
    return (1);
}

int ft_printf(const char *s, ...)
{
    size_t i;
    va_list args;
    char    *str;
    int value;

    value = 0;
    str = ft
}
