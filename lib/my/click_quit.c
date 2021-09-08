/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** click_quit.c
*/

#include "../../include/rpg.h"

#define TRUE 1
#define FALSE 0

sfVector2f click_quit(sfMouseButtonEvent interaction, sfVector2f pos_quit,
display *window)
{

    if (interaction.x >= pos_quit.x && interaction.x <= pos_quit.x +
    340 && interaction.y >= pos_quit.y && interaction.y <= pos_quit.y + 180) {
        window->die = TRUE;
    }
    return (pos_quit);
}

sfVector2f click_quit_go(sfMouseButtonEvent interaction, sfVector2f pos_quit,
display *window)
{

    if (interaction.x >= pos_quit.x && interaction.x <= pos_quit.x +
    340 && interaction.y >= pos_quit.y && interaction.y <= pos_quit.y + 180) {
        window->die = TRUE;
    }
    return (pos_quit);
}

sfVector2f click_play(sfMouseButtonEvent interaction, sfVector2f pos_quit,
prcpl *ecr_prcpl, display *window)
{

    if (interaction.x >= pos_quit.x && interaction.x <= pos_quit.x +
    340 && interaction.y >= pos_quit.y && interaction.y <= pos_quit.y + 180) {
        window->i = 1;
    }
    return (pos_quit);
}