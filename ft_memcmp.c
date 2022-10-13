/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:02:02 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/12 10:21:43 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			index;
	unsigned char	*str1_c;
	unsigned char	*str2_c;

	str1_c = (unsigned char *)str1;
	str2_c = (unsigned char *)str2;
	index = 0;
	while (index < n)
	{
		if (str1_c[index] != str2_c[index])
			return (str1_c[index] - str2_c[index]);
		index++;
	}
	return (0);
}
