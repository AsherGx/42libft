/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:44:02 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/23 23:19:21 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	y;
	size_t	x;
	size_t	i;
	char	**res;

	if (!s)
		return (NULL);
	x = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		x++;
	}
	res = malloc ((x + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	x = 0;
	i = 0;
	while (s[i])
	{
		y = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i + y] && s[i + y] != c)
			y++;
		res[x] = malloc (y + 1);
		if (!res[x])
			return (NULL);
		y = 0;
		while (s[i] != c && s[i] != '\0')
		{
			res[x][y] = s[i];
			y++;
			i++;
		}
		res[x][y] = '\0';
		x++;
	}
	res[x] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	**res;
// 	int		i;

// 	res = ft_split("ciao   come stai", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }