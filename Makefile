NAME	=	libftprintf.a
printers	=	./printers/ft_print_c.c ./printers/ft_print_s.c \
				./printers/ft_print_id.c ./printers/ft_print_p.c \
				./printers/ft_print_u.c ./printers/ft_print_lower_x.c \
				./printers/ft_print_upper_X.c ./utils/ft_is_flag.c \
				./utils/ft_hexa_len.c ./utils/ft_nbrlen.c \
				./utils/ft_X_print.c ./utils/ft_x_printer.c
OBJS	=	$(printers:.c=.o)
CFLAGS    = -Wall -Wextra -Werror -I.
HEADER    =    ft_printf.h

all: libft.a	$(NAME)

libft.a: 
	$(MAKE) -C ./libft

$(NAME): $(OBJS)
	mv ./libft/libft.a $(NAME)
	ar $(NAME) $(OBJS)

clear:
	-rm -f printers