#include"ft_printf.h"

int ft_print_p(unsigned long int n)
{
  int mod;

  mod = n % 16;
  if(n >= 16)
    ft_print_p(n / 16);
  if (mod >= 10 && mod <=15)
    ft_putchar_fd(mod + 87, 1);
  if (mod >= 0 && mod < 10)
    ft_putchar_fd(mod + 48, 1); 
  return(ft_hexa_len(n));  
}
