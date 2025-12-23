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
	size_t	p;
	size_t	o;
	size_t	i;
	char	*ptr;

	while (s[i])
	{
		while (s[i] != c)
		{
			ptr[p] == s[i];
			p++;
			i++;
		}
		ptr[p] = '\0';
	}
	
}

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("ciao   come stai", ' ');
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}