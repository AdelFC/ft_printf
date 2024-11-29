/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:32:01 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/29 10:29:30 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int ft_printf_args(char c, va_list args, int i)


int ft_printf(const char *s, ...)
{
    size_t  i;
    va_list args;

    while (*(s + i))
    {
        if (*(s + i) = '%')
        {
            ft_printf_args(*(str + i));
            i++;
        }
        else
        {
            
        }
    }

}

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign