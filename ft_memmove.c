
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*s;
	char		*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (dest != NULL || src != NULL)
	{
		if (d > s)
		{
			while (len-- > 0)
				d[len] = s[len];
		}
		else
		{
			while (i < len)
			{
				d[i] = s[i];
				i++;
			}
		}
		return (dest);
	}
	return (NULL);
}
