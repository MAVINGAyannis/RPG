/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mouse_click.c
*/

#include "../../include/rpg.h"

void mouse_click(prcpl *ecr_prcpl, display *window, gameplay *game)
{
    if (window->event.type == sfEvtMouseButtonPressed) {
        ecr_prcpl->pos_quit = click_quit(window->event.mouseButton,
        ecr_prcpl->pos_quit, window);
        ecr_prcpl->pos_play = click_play(window->event.mouseButton,
        ecr_prcpl->pos_play, ecr_prcpl, window);
        game->pos_quit_go = click_quit_go(window->event.mouseButton,
        game->pos_quit_go, window);
    }
}