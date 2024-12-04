/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:11:53 by afodil-c          #+#    #+#             */
/*   Updated: 2024/12/04 00:11:53 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *value)
{
	write(1, &c, 1);
	(*value)++;
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str, int *value)
{
	if (!str)
		*value += write(1, "(null)", 6);
	else
		*value += write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nb, int *value)
{
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648", value);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', value);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, value);
	ft_putchar((nb % 10) + '0', value);
}

void	ft_putnbr_unsigned(unsigned int nb, int *value)
{
	if (nb >= 10)
		ft_putnbr_unsigned(nb / 10, value);
	ft_putchar((nb % 10) + '0', value);
}

void	ft_putnbr_base(unsigned long long nbr, char *base, int *value, char type)
{
	if (type == 'p')
	{
		if (nbr == 0)
		{
			ft_putstr("(nil)", value);
			return ;
		}
		if (*value == 0)
			ft_putstr("0x", value);
	}
	if (nbr >= 16)
		ft_putnbr_base(nbr / 16, base, value, type);
	ft_putchar(base[nbr % 16], value);
}



