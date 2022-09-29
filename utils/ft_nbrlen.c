#include"ft_printf.h"

size_t	ft_nbrlen(int nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
		len++;
	nbr = nbr / 10;
	while (nbr)
	{
		nbr = nbr / 10;
			len++;
	}
	return (len);
}
