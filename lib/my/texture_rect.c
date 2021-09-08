/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** texture_rect.c
*/

#include "../../include/rpg.h"

void texture_rect(prcpl *ecr_prpl, move_p *mvc, gameplay *game)
{
    sfSprite_setTextureRect(ecr_prpl->sprite_logoa, ecr_prpl->rect_logo);
    sfSprite_setTextureRect(mvc->sprite_mvright, mvc->rect_mvright);
    sfSprite_setTextureRect(mvc->sprite_mvleft, mvc->rect_mvleft);
    sfSprite_setTextureRect(mvc->sprite_mvfont, mvc->rect_mvfont);
    sfSprite_setTextureRect(mvc->sprite_mvback, mvc->rect_mvback);
    sfSprite_setTextureRect(mvc->sprite_atck_right, mvc->rect_a_right);
    sfSprite_setTextureRect(mvc->sprite_atck_right, mvc->rect_a_left);
    sfSprite_setTextureRect(mvc->sprite_atck_right, mvc->rect_a_front);
    sfSprite_setTextureRect(mvc->sprite_atck_right, mvc->rect_a_back);
    sfSprite_setTextureRect(game->sprite_alien, game->rect_alien);
    sfSprite_setTextureRect(game->sprite_alien_2, game->rect_alien_2);
    sfSprite_setTextureRect(game->sprite_alien_3, game->rect_alien_3);
    sfSprite_setTextureRect(game->sprite_alien_4, game->rect_alien_4);
    sfSprite_setTextureRect(game->sprite_alien_5, game->rect_alien_5);
    sfSprite_setTextureRect(game->sprite_alien_6, game->rect_alien_6);
    sfSprite_setTextureRect(game->sprite_alien_7, game->rect_alien_7);
    sfSprite_setTextureRect(game->sprite_alien_8, game->rect_alien_8);
    sfSprite_setTextureRect(game->sprite_alien_9, game->rect_alien_9);
    sfSprite_setTextureRect(game->sprite_alien_10, game->rect_alien_10);
}