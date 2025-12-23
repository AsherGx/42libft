/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 20:56:48 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/22 22:04:56 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	o;
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;
	
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	o = 0;
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
	return (NULL);

	while (s1[i])
	{
		ptr[o] = s1[i];
		i++;
		o++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[o] = s2[i];
		i++;
		o++;
	}
	ptr[o] = '\0';
	return (ptr);
	
}