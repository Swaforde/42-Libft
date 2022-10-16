
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	index1;
	size_t	return_value;
	size_t	index2;

	index1 = ft_strlen(dest);
	index2 = 0;
	return_value = index1 + ft_strlen(src);
	if (dstsize < index1)
		return (dstsize + ft_strlen(src));
	while (index1 < (dstsize - 1))
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = '\0';
	return (return_value);
}
