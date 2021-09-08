/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** move_map.c
*/

#include "../../include/rpg.h"

void move_p_right(move_p *mvc, prcpl *ecr_prcpl, display *window,
gameplay *game)
{
    if (window->i == 1) {
    if (sfKeyboard_isKeyPressed(sfKeyD)) {
        animation_mvright(mvc);
        ecr_prcpl->pos_map_gauche.x -= 2;
        ecr_prcpl->pos_map_milieu.x -= 2;
        ecr_prcpl->pos_map_droite.x -= 2;
        mvc->pos_redcircle.x += 0.095;
        game->pos_alien.x -= 2;
        game->pos_alien_2.x -= 2;
        game->pos_alien_3.x -= 2;
        game->pos_alien_4.x -= 2;
        game->pos_alien_5.x -= 2;
        game->pos_alien_6.x -= 2;
        game->pos_alien_7.x -= 2;
        game->pos_alien_8.x -= 2;
        game->pos_alien_9.x -= 2;
        game->pos_alien_10.x -= 2;
        game->pos_zelda_game.x -= 2;
        window->right = 1;
        window->left = 0;
        window->front = 0;
        window->back = 0;
    }
    }
}

void move_p_left(move_p *mvc, prcpl *ecr_prcpl, display *window, gameplay *game)
{
    if (window->i == 1) {
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        animation_mvleft(mvc);
        if (ecr_prcpl->pos_map_gauche.x <= 0) {
            ecr_prcpl->pos_map_gauche.x += 2;
            ecr_prcpl->pos_map_milieu.x += 2;
            ecr_prcpl->pos_map_droite.x += 2;
            mvc->pos_redcircle.x -= 0.095;
            game->pos_alien.x += 2;
            game->pos_alien_2.x += 2;
            game->pos_alien_3.x += 2;
            game->pos_alien_4.x += 2;
            game->pos_alien_5.x += 2;
            game->pos_alien_6.x += 2;
            game->pos_alien_7.x += 2;
            game->pos_alien_8.x += 2;
            game->pos_alien_9.x += 2;
            game->pos_alien_10.x += 2;
            game->pos_zelda_game.x += 2;
        }
        window->right = 0;
        window->left = 1;
        window->front = 0;
        window->back = 0;
    }
    }
}

void move_p_front(move_p *mvc, prcpl *ecr_prcpl, display *window,
gameplay *game)
{
    if (window->i == 1) {
    if (sfKeyboard_isKeyPressed(sfKeyZ)) {
        animation_mvfont(mvc);
        ecr_prcpl->pos_map_gauche.y += 2;
        ecr_prcpl->pos_map_milieu.y += 2;
        ecr_prcpl->pos_map_droite.y += 2;
        mvc->pos_redcircle.y -= 0.095;
        game->pos_alien.y += 2;
        game->pos_alien_2.y += 2;
        game->pos_alien_3.y += 2;
        game->pos_alien_4.y += 2;
        game->pos_alien_5.y += 2;
        game->pos_alien_6.y += 2;
        game->pos_alien_7.y += 2;
        game->pos_alien_8.y += 2;
        game->pos_alien_9.y += 2;
        game->pos_alien_10.y += 2;
        game->pos_zelda_game.y += 2;
        window->right = 0;
        window->left = 0;
        window->front = 1;
        window->back = 0;
    }
    }
}

void move_p_back(move_p *mvc, prcpl *ecr_prcpl, display *window, gameplay *game)
{
    if (window->i == 1) {
    if (sfKeyboard_isKeyPressed(sfKeyS)) {
        animation_mvback(mvc);
        ecr_prcpl->pos_map_gauche.y -= 2;
        ecr_prcpl->pos_map_milieu.y -= 2;
        ecr_prcpl->pos_map_droite.y -= 2;
        mvc->pos_redcircle.y += 0.095;
        game->pos_alien.y -= 2;
        game->pos_alien_2.y -= 2;
        game->pos_alien_3.y -= 2;
        game->pos_alien_4.y -= 2;
        game->pos_alien_5.y -= 2;
        game->pos_alien_6.y -= 2;
        game->pos_alien_7.y -= 2;
        game->pos_alien_8.y -= 2;
        game->pos_alien_9.y -= 2;
        game->pos_alien_10.y -= 2;
        game->pos_zelda_game.y -= 2;
        window->right = 0;
        window->left = 0;
        window->front = 0;
        window->back = 1;
    }
    }
}