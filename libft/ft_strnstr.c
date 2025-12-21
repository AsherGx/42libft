/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 23:10:48 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/21 21:35:43 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *str, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (str[0] == '\0')
		return ((char *)src);
	while (i < len && src[i] != '\0')
	{
		n = 0;
		while (str[n] != '\0' && src[i + n] == str[n] && i + n < len)
			n++;
		if (str[n] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}
