#include"ft_printf.h"

int ft_print_u(unsigned int n)
{  
    if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
	return(ft_nbrlen(n));
}
