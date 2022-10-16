

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	if (c == EOF)
		return (-1);
	return ((unsigned char)c);
}
