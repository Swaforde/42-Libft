
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	if (c == EOF)
		return (-1);
	return ((unsigned char)c);
}
