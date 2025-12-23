/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:07:13 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/23 19:32:08 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	end = ft_strlen(s1);

	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;

	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;

	ptr = malloc((end - start) + 1);
	if (!ptr)
		return (NULL);

	i = 0;
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
