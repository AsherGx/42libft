/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaamiri <aaamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:10:00 by aaamiri           #+#    #+#             */
/*   Updated: 2025/12/21 19:07:51 by aaamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t scatole, size_t quante)
{
	void	*ptr;

	if (scatole != 0 && scatole > __SIZE_MAX__ / quante)
		return (NULL);
	ptr = malloc(scatole * quante);
	if (!ptr)
		return (NULL);
	ft_memset (ptr, '\0', scatole * quante);
	return (ptr);
}
