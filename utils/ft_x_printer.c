#include"../ft_printf.h"

void ft_x_printer(unsigned int n)
{
    int mod;

    mod = n % 16;
    if(n >= 16)
        ft_x_printer(n / 16);
    if (mod >= 10 && mod <=15)
        ft_putchar_fd(mod + 87, 1);
    if (mod >= 0 && mod < 10)
    ft_putchar_fd(mod + 48, 1);    
}
