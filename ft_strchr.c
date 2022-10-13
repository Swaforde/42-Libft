/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:25:29 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/11 14:03:08 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (str[index] != ((char)c))
	{
		if (str[index] == '\0')
		{
			return (NULL);
		}
		index++;
	}
	return ((char *)str + index);
}
