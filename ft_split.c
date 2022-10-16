/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouvera <tbouvera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:58:06 by tbouvera          #+#    #+#             */
/*   Updated: 2022/10/14 16:05:17 by tbouvera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_parsing(char const *str, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == 0))
			word_count++;
		i++;
	}
	return (word_count);
}

void	ft_size_of_tab(char **ptr, char *s, char c, int max_word)
{
	int		size;
	int		i;
	int		index;

	size = 0;
	i = 0;
	index = 0;
	while (i < max_word)
	{
		while (s[index] == c)
			index ++;
		while (s[index] != c && s[index++] != 0)
			size ++;
		ptr[i] = ft_calloc (sizeof(char), (size + 1));
		if (!ptr[i])
			return (NULL);
		size = 0;
		i++;
	}
}

void	ft_asign_char(char **ptr, char *s, char c, int max_word)
{
	int		size;
	int		i;
	int		index;

	size = 0;
	i = 0;
	index = 0;
	while (i < max_word)
	{
		while (s[index] == c)
			index ++;
		while (s[index] != c && s[index] != 0)
			ptr[i][size++] = s[index++];
		size = 0;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		index;
	int		max_word;

	index = 0;
	max_word = 0;
	ptr = ft_calloc (sizeof(char *), ft_word_parsing(s, c) + 1);
	if (!ptr)
		return (NULL);
	if (!s)
		return (NULL);
	max_word = ft_word_parsing(s, c);
	ft_size_of_tab(ptr, s, c, max_word);
	ft_asign_char(ptr, s, c, max_word);
	return (ptr);
}
