##
## EPITECH PROJECT, 2020
## makefile
## File description:
## gcc etc...
##

CFLAGS = -I./include -Wall -Wextra -g3

LIBS = -l csfml-graphics -lm -l csfml-system -l csfml-window -l csfml-audio

MY_LIBS = -L./lib -lfml -L./lib -lmy

SRC	=	main.c \
		main_window.c \
		struct/main_initialize.c \
		struct/tool_initialize.c \
		struct/option_initialize.c \
		struct/destroy.c \
		struct/level/level_initialize.c \
		struct/level/level_preload.c \
		struct/level/resources_preload.c \
		struct/level/level_preobject_load.c \
		struct/level/level_preload_2.c \
		struct/level/resources_preload_2.c \
		event/clock.c \
		event/main_event.c \
		sources/display/main_display.c \
		sources/display/gamemode_display.c\
		sources/calcul/main_game.c \
		sources/calcul/cube.c \
		sources/calcul/hitboxes.c \
		sources/calcul/hitboxes_2.c \
		sources/calcul/hitboxes_3.c \
		sources/calcul/tool_calcul.c \
		sources/calcul/respawn.c \

OBJ		=	$(SRC:.c=.o)

NAME	=	my_runner


all:	 $(NAME)

$(NAME): $(OBJ)
		@make -C ./lib/fml
		@make -C ./lib/my
		@gcc $(OBJ) -o $(NAME) $(MY_LIBS) $(LIBS)

force:
		@gcc $(OBJ) -o $(NAME) $(MY_LIBS) $(LIBS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/fml
	make fclean -C ./lib/my

re: fclean all

.PHONY: clean fclean re force all