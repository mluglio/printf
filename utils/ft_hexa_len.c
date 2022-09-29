#include"ft_printf.h"

int ft_hexa_len(unsigned long int n)
{
    int len;

    len = 0;
  while (n > 0)
    {
      n = n / 16;
        len++;      
    }
    return(len);
}
