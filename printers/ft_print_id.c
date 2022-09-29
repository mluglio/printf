#include"../ft_printf.h"

int	ft_print_id(int c)
{
    char *itoa_return;
    int itoa_len;

    itoa_return = ft_itoa(c);
    ft_putstr_fd(itoa_return, 1);
    itoa_len = ft_strlen(itoa_return);
    free (itoa_return);
    return itoa_len;
}   
  