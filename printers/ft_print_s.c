#include"../ft_printf.h"

int ft_print_s(char *s)
{
    int i;
    if (!s)
	{
		write(1, "(nill)", 6);
		return(6);
	}
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return(i);
}