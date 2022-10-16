
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (((char *)s)[index] != ((char)c))
	{
		if (((char *)s)[index] == '\0')
		{
			return (NULL);
		}
		index++;
	}
	if (index >= n)
		return (NULL);
	return ((char *)s + index);
}
