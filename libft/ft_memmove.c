/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:29:36 by afodil-c          #+#    #+#             */
/*   Updated: 2024/12/02 10:54:16 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*psrc;
	char	*pdst;
	size_t	i;

	if (!dst && !src)
		return (0);
	psrc = (char *)src;
	pdst = (char *)dst;
	i = 0;
	if (pdst > psrc)
		while (len-- > 0)
			pdst[len] = psrc[len];
	else
	{
		ft_memcpy(pdst, psrc, len);
	}
	return (dst);
}
