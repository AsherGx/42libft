/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 04:39:34 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/31 16:53:14 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	size_t len;
	
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc ((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f ((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
