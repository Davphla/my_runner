##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	fml_put_pixel.c \
		fml_framebuffer_create.c \
		fml_draw_rectangle.c \
		fml_draw_line.c \
		fml_draw_circle.c \
		fml_vector2f_init.c \
		fml_sfintrect_initialize.c \
		fml_sffloatrect_initialize.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libfml.a

all:	$(NAME)

$(NAME):	$(OBJ)
	cp fml.h ../../include
	ar rc $(NAME) $(OBJ)
	cp libfml.a ..

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../libfml.a
	rm -f libfml.a

re:	fclean all
