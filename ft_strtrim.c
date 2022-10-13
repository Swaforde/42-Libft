/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:46:35 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/11 14:04:15 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set_checker(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != 0)
	{
		if (c == set[index])
			return (1);
		else
			index++;
	}
	return (0);
}

int	ft_strlen_custom(char const *str, char const *set)
{
	int	index;
	int	return_value;

	index = 0;
	return_value = 0;
	while (str[index] != 0)
	{
		if (ft_set_checker(str[index], set) == 1)
			;
		else
			return_value++;
		index++;
	}
	return(return_value);
}

char	*ptr_fill(char *ptr, char const *s1, char const *set)
{
	int	index;
	int	ptr_index;

	index = 0;
	ptr_index = 0;
	while (s1[index] != 0)
	{
		if (ft_set_checker(s1[index], set) == 0)
			ptr[ptr_index++] = s1[index]; 
		index++;
	}
	ptr[ptr_index] = 0;
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	ptr = (char *)malloc (sizeof(char) * ft_strlen_custom(s1, set) + 1);
	if (!ptr)
		return (NULL);
	return (ptr_fill(ptr, s1, set));
}