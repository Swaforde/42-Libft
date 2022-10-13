/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:22:29 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/13 10:39:56 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (((unsigned char *)s)[index] != ((unsigned char)c))
	{
		if (((unsigned char *)s)[index] == '\0')
		{
			return (NULL);
		}
		index++;
	}
	if (index > n)
		return (NULL);
	return ((unsigned char *)s + index);
}
