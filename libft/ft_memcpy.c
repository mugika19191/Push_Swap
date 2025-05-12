/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <imugica-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:24:14 by imugica-          #+#    #+#             */
/*   Updated: 2025/03/03 19:07:06 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * brief: dfjdkfjdkfjfd
 * descripcion: jfdjfkdjfkdjfkd
 * 
*/
void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	int		i;
	char	*str;

	i = 0;
	if (!dest && !src)
		return (0);
	str = (char *)dest;
	while (i < (int)count)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
