##
## EPITECH PROJECT, 2019
## MUL_my_hunter_2019
## File description:
## Makefile
##

SRC 	=	my_rpg.c	\
			./lib/my/create_from_file.c	\
			./lib/my/create_sprite.c	\
			./lib/my/create_texture.c	\
			./lib/my/event_function.c	\
			./lib/my/render_draw_sprite.c	\
			./lib/my/set_pos.c	\
			./lib/my/sprite_pos.c	\
			./lib/my/texture_rect.c	\
			./lib/my/animation_logo_prcpl.c	\
			./lib/my/click_quit.c	\
			./lib/my/mouse_click.c	\
			./lib/my/interaction_button.c	\
			./lib/my/animation_move.c	\
			./lib/my/move_map.c	\
			./lib/my/set_rect.c	\
			./lib/my/animation_attack.c	\
			./lib/my/set_good_draw.c	\
			./lib/my/attack_bomb.c	\
			./lib/my/set_die_link_aliens.c	\
			./lib/my/die_link.c	\
			./lib/my/die_aliens.c	\
			./lib/my/get_victory.c	\

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CPPFLAGS   =   -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window -g3 && ./my_rpg

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f *.c~
	rm -f \#*\#
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re