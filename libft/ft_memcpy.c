/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 21:15:17 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/19 00:00:06 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dxst;
	const unsigned char	*sxr;

	if (!dest && !src)
		return (NULL);
	dxst = (unsigned char *)dest;
	sxr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dxst[i] = sxr[i];
		i++;
	}
	return (dest);
}
