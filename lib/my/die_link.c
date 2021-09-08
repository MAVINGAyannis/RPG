/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** die_link.c
*/

#include "../../include/rpg.h"

void die_link(move_p *mvc, gameplay *game, display *window, prcpl *ecr_prcpl)
{
    if (window->die_link == 1 || window->die_link_2 == 1 || window->die_link_3 == 1 || window->die_link_4 == 1 || window->die_link_5 == 1 || window->die_link_6 == 1 || window->die_link_7 == 1 || window->die_link_8 == 1 || window->die_link_9 == 1 || window->die_link_10 == 1) {
        mvc->pos_link_spawn_2.x -= 1;
        set_bool(window, mvc);
        sfRenderWindow_drawSprite(window->window, game->sprite_dielink, NULL);
        if (mvc->pos_link_spawn_2.x <= 1800) {
            sfRenderWindow_drawSprite(window->window, mvc->sprite_linkspawn_2, NULL);
            sfRenderWindow_drawSprite(window->window, mvc->sprite_fond_noir, NULL);
            sfRenderWindow_drawSprite(window->window, game->sprite_fond_go, NULL);
            sfRenderWindow_drawSprite(window->window, game->sprite_quit_go, NULL);
            if (window->i == 1) {
                if (ecr_prcpl->mouse.x >= game->pos_quit_go.x && ecr_prcpl->mouse.x <= game->pos_quit_go.x + 350
                && ecr_prcpl->mouse.y >= game->pos_quit_go.y && ecr_prcpl->mouse.y <= game->pos_quit_go.y + 200)
                    sfRenderWindow_drawSprite(window->window, game->sprite_quit_surbr_go, NULL);
            }
        }
    }
}

void set_bool(display *window, move_p *mvc)
{
    window->right = 0;
    window->left = 0;
    window->front = 0;
    window->back = 0;
}