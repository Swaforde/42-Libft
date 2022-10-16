
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
