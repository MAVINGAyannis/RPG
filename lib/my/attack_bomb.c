/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** attack_bomb.c
*/

#include "../../include/rpg.h"

void attack_bomb_1(gameplay *game, display *window)
{
    if (window->right == 1 && sfKeyboard_isKeyPressed(sfKeyR))
        window->bomb_r = 1;

    if (window->bomb_r == 1 && game->pos_bombattack.x <= 410)
        sfRenderWindow_drawSprite(window->window, game->sprite_bombattack,
        NULL);
    if (window->bomb_r == 1)
            game->pos_bombattack.x += 1.5;
    if (game->pos_bombattack.x >= 410)
            game->pos_bombattack.x += 10;

    if (window->left == 1 && sfKeyboard_isKeyPressed(sfKeyR))
        window->bomb_l = 1;

    if (window->bomb_l == 1 && game->pos_bombattack_2.x >= 130)
        sfRenderWindow_drawSprite(window->window, game->sprite_bombattack_2,
        NULL);
    if (window->bomb_l == 1)
        game->pos_bombattack_2.x -= 1.5;
    if (game->pos_bombattack_2.x <= 130)
        game->pos_bombattack_2.x -= 10;
    attack_bomb_2(game, window);
}

void attack_bomb_2(gameplay *game, display *window)
{
    if (window->front == 1 && sfKeyboard_isKeyPressed(sfKeyR))
        window->bomb_fr = 1;

    if (window->bomb_fr == 1 && game->pos_bombattack_3.y >= 200)
        sfRenderWindow_drawSprite(window->window, game->sprite_bombattack_3,
        NULL);
    if (window->bomb_fr == 1)
            game->pos_bombattack_3.y -= 1.5;
    if (game->pos_bombattack_3.y <= 300)
                game->pos_bombattack_3.y -= 10;

    if (window->back == 1 && sfKeyboard_isKeyPressed(sfKeyR))
        window->bomb_b = 1;

    if (window->bomb_b == 1 && game->pos_bombattack_4.y <= 570)
        sfRenderWindow_drawSprite(window->window, game->sprite_bombattack_4,
        NULL);
    if (window->bomb_b == 1)
        game->pos_bombattack_4.y += 1.5;
    if (game->pos_bombattack_4.y >= 570)
        game->pos_bombattack_4.y += 10;
}