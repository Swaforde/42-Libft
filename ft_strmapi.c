
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		index;

	index = 0;
	ptr = (char *)malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	while (s[index] != '\0')
	{
		ptr[index] = f(index, s[index]);
		index ++;
	}
	ptr[index] = 0;
	return (ptr);
}
