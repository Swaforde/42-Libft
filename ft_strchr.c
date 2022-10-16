
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
