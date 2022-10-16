
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		index;
	size_t		new_index;
	size_t		size;
	size_t		tmp;
	char		*ptr;

	index = start;
	size = 0;
	new_index = 0;
	tmp = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		ptr = (char *)malloc (1 * sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	while (s[index++] != 0 && size != len)
		size++;
	ptr = (char *)malloc (size * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (tmp++ < size)
		ptr[new_index++] = s[start++];
	ptr[new_index] = '\0';
	return (ptr);
}
