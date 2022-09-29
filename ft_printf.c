#include"ft_printf.h"

int flag_stock(char a, va_list args)
{
	if (a == 'c')
		return (ft_print_c(va_arg(args, int)));
	if (a == 's')
	 	return (ft_print_s(va_arg(args, char *)));
	if (a == 'i' || a == 'd')
		return (ft_print_id(va_arg(args, int)));
	if (a == 'p')
		return (ft_print_p((va_arg(args, unsigned long int))));
	if (a == 'x')
		return (ft_print_lower_x(va_arg(args, unsigned int));
	if (a == 'X')
		return (ft_print_upper_X(va_arg(args, unsigned int));
	if (a == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	if (a == '%')
		return (ft_print_c('%'));
	return(0);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int i;
	int counter;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if(str[i] == '%' && ft_is_flag(str[i + 1]) == 1)
		
		{
			i++;
			counter += flag_stock(str[i], args);
		}
		else
		{
			write (1, &str[i], 1);
			i++;
			counter++;
		}
	}
	 return(counter);
}
