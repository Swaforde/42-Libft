
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	int		str_size;
	int		index;

	str_size = ft_strlen(str);
	dest = (char *)malloc (sizeof (char) * str_size + 1);
	if (!dest)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
