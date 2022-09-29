#ifndef _FT_PRINTF_H
#define _FT_PRINTF_H

#include<stdarg.h>
#include "./libft/libft.h" 


size_t	ft_nbrlen(int nbr);
void ft_x_printer(unsigned int n);
void ft_X_print(unsigned int n);
int ft_hexa_len(unsigned long int n);
int ft_is_flag(char c);
int	ft_print_c(char c);
int ft_print_s(char *s);
int	ft_print_id(int c);
int ft_print_lower_x(unsigned int n);
int ft_print_u(unsigned int n);
int ft_print_p(unsigned long int n);
int ft_print_upper_X(unsigned int n);

#endif