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

int ft_word_parsing(char const *str, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		index;
	int		max_word;
	int		size;
	int		i;

	size = 0;
	index = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = (char **)malloc (sizeof(char *) * ft_word_parsing(s, c));
	if (!ptr)
		return (NULL);
	max_word = ft_word_parsing(s, c);

	while (i < max_word)
	{
		while (s[index + 1] == c)
			index ++;
		while (s[index + 1] != c && s[index] != 0)
		{
			index ++;
			size ++;
		}
		printf ("mot ->%d nb de char ->%d\n", i, size);
		ptr[i] = calloc (sizeof(char), size + 1);
		size = 0;
		i++;
	}

	i = 0;
	index = 0;
	while (i < max_word)
	{
		while (s[index] == c)
			index ++;
		while (s[index + 1] != c && s[index] != 0)
		{
			printf ("%c", s[index]);
			size ++;
			index ++;
		}
		write (1, "\n", 1);
		size = 0;
		i++;
	}

	return (ptr);
}