
#include "libft.h"

void	ft_tab_fill_min_int(char *ptr)
{
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
}

int	ft_get_size(int nb)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		size ++;
		nb = nb * -1;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		size ++;
	}
	if (nb < 10)
		size++;
	return (size);
}

void	ft_tab_fill(char *ptr, int nb, int max_index)
{
	int	index;

	index = max_index - 1;
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = nb * -1;
	}
	while (nb >= 10)
	{
		ptr[index] = ((nb % 10) + '0');
		nb = nb / 10;
		index --;
	}
	if (nb < 10)
		ptr[index] = (nb + '0');
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;

	if (n != -2147483648)
		size = ft_get_size(n);
	else
		size = 11;
	ptr = ft_calloc(sizeof(char), size + 1);
	if (!ptr)
		return (NULL);
	if (n != -2147483648)
		ft_tab_fill(ptr, n, size);
	else
		ft_tab_fill_min_int(ptr);
	return (ptr);
}
