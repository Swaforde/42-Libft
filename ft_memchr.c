
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
