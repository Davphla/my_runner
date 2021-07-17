##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c \
		my_strcapitalize.c \
		my_strlowcase.c \
		my_putchar_error.c \
		my_strcat.c \
		my_strncat.c \
		my_compute_power_rec.c \
		my_put_nbr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_compute_square_root.c \
		my_putstr.c \
		my_strcpy.c \
		my_strncpy.c \
		my_find_prime_sup.c \
		my_putstr_error.c \
		my_str_isalpha.c \
		my_strstr.c \
		my_getnbr.c \
		my_revstr.c \
		my_str_islower.c \
		my_strupcase.c \
		my_showmem.c \
		my_str_isnum.c \
		my_swap.c \
		my_showstr.c \
		my_str_isprintable.c \
		my_is_prime.c \
		my_show_word_array.c \
		my_str_isupper.c \
		my_sort_int_array.c \
		my_strlen.c \
		my_is_pos.c \
		my_is_pos_getnbr.c \
		my_matrice_length.c \
		my_strdup.c \
		my_alloc_char.c \
		my_nbrcmp.c \
		my_add_char.c \
		my_add_last_char.c \
		my_nbr_to_str.c \
		my_slice_str.c \
		my_strswap.c \
		my_megaputstr.c \
		my_putnbr_base.c \
		my_alloc_int.c \
		my_putnchar.c \
		my_nbrlen.c \
		my_putnstr.c \
		my_strnbr_cmp.c \
		my_convertbase.c \
		my_add_last_str.c \
		printf/my_printf.c \
		printf/flags.c \
		printf/spaces_and_zeros.c \
		my_alloc_cat.c \
		my_init_matrice.c \
		my_free.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ..
	cp my.h ../../include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../libmy.a
	rm -f libmy.a

re:	fclean all
