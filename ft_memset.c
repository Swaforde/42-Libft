
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		((unsigned char *)str)[index] = c;
		index++;
	}
	return (str);
}
