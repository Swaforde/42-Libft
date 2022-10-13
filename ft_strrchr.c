/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:46:35 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/11 14:04:15 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = ft_strlen(str);
	while (str[index] != ((char)c))
	{
		if (index == 0)
		{
			return (NULL);
		}
		index--;
	}
	return ((unsigned char *)str + index);
}
