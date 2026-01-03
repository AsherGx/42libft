/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 00:12:39 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/29 17:26:16 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	char	*snb;

	i = 0;
	nb = n;

	if (nb == 0)
		i++;
	if (nb < 0)
	{
		i++;
		nb = -nb; // lo trasforma per gestirlo 
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	snb = malloc (i + 1);
	if (!snb)
		return (NULL);
	
	snb[i] = '\0';
	nb = n;
	if (nb == 0)
		snb[0] = '0';
	if (nb < 0)
	{
		snb[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		i--;
		snb[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (snb);
}