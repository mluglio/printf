#include"../ft_printf.h"

int ft_is_flag(char c)
{
    if (c != 'c' || c != 's' || c != 'p' || c != 'd' || c != 'i' || c != 'u' || c != 'x' || c != 'X' || c != '%')
        return(0);
    else
        return(1);
}
