/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event_function.c
*/

#include "../../include/rpg.h"

void event_function(prcpl *ecr_prpcl, display *window)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
    }
}