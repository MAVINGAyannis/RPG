/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** interaction_button.c
*/

#include "../../include/rpg.h"

void interaction_button(prcpl *ecr_prcpl, display *window, gameplay *game)
{
    ecr_prcpl->mouse = sfMouse_getPositionRenderWindow(window->window);

    if (ecr_prcpl->mouse.x >= ecr_prcpl->pos_play.x && ecr_prcpl->mouse.x <= ecr_prcpl->pos_play.x + 350
    && ecr_prcpl->mouse.y >= ecr_prcpl->pos_play.y && ecr_prcpl->mouse.y <= ecr_prcpl->pos_play.y + 200)
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_play_surbr, NULL);

    if (ecr_prcpl->mouse.x >= ecr_prcpl->pos_quit.x && ecr_prcpl->mouse.x <= ecr_prcpl->pos_quit.x + 350
    && ecr_prcpl->mouse.y >= ecr_prcpl->pos_quit.y && ecr_prcpl->mouse.y <= ecr_prcpl->pos_quit.y + 200)
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_quit_surbr, NULL);
}