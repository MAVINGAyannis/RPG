/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** get_victory.c
*/

#include "../../include/rpg.h"

void get_victory(gameplay *game, move_p *mvc, display *window)
{
    if (mvc->pos_mvfont.x >= game->pos_zelda_game.x && mvc->pos_mvfont.x <= game->pos_zelda_game.x + 70 && mvc->pos_mvfont.y >= game->pos_zelda_game.y && mvc->pos_mvfont.y <= game->pos_zelda_game.y + 100) {
        sfRenderWindow_drawSprite(window->window, game->sprite_fond_noir_win, NULL);
        sfRenderWindow_drawSprite(window->window, game->sprite_end_win, NULL);
        sfRenderWindow_drawSprite(window->window, game->sprite_quit_go, NULL);
        sfRenderWindow_drawSprite(window->window, game->sprite_quit_surbr_go, NULL);
    }
}