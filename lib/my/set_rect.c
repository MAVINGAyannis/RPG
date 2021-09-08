/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_rect.c
*/

#include "../../include/rpg.h"

void set_rect(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    ecr_prcpl->rect_logo = (sfIntRect){0, 0, 160, 120};
    mvc->rect_mvright = (sfIntRect){0, 0, 60, 60};
    mvc->rect_mvleft = (sfIntRect){0, 0, 40, 60};
    mvc->rect_mvfont = (sfIntRect){0, 0, 50, 60};
    mvc->rect_mvback = (sfIntRect){0, 0, 50, 60};
    mvc->rect_a_right = (sfIntRect){-5, 0, 65, 60};
    mvc->rect_a_left = (sfIntRect){0, 0, 50, 60};
    mvc->rect_a_front = (sfIntRect){0, 0, 50, 60};
    mvc->rect_a_back = (sfIntRect){0, 0, 50, 60};
    game->rect_alien = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_2 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_3 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_4 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_5 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_6 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_7 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_8 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_9 = (sfIntRect){0, 0, 95, 95};
    game->rect_alien_10 = (sfIntRect){0, 0, 95, 95};
}