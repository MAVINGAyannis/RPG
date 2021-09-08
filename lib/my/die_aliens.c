/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** die_aliens.c
*/

#include "../../include/rpg.h"

void die_alien(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien.x && game->pos_bombattack.x <= game->pos_alien.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien.y && game->pos_bombattack.y <= game->pos_alien.y + 100) {
        window->die_alien = 1;
        game->pos_alien.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien.x && game->pos_bombattack_2.x <= game->pos_alien.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien.y && game->pos_bombattack_2.y <= game->pos_alien.y + 100) {
        window->die_alien = 1;
        game->pos_alien.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien.x && game->pos_bombattack_3.x <= game->pos_alien.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien.y && game->pos_bombattack_3.y <= game->pos_alien.y + 100) {
        window->die_alien = 1;
        game->pos_alien.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien.x && game->pos_bombattack_4.x <= game->pos_alien.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien.y && game->pos_bombattack_4.y <= game->pos_alien.y + 100) {
        window->die_alien = 1;
        game->pos_alien.x = -100;
    }
}

void die_alien_2(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_2.x && game->pos_bombattack.x <= game->pos_alien_2.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_2.y && game->pos_bombattack.y <= game->pos_alien_2.y + 100) {
        window->die_alien_2 = 1;
        game->pos_alien_2.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_2.x && game->pos_bombattack_2.x <= game->pos_alien_2.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_2.y && game->pos_bombattack_2.y <= game->pos_alien_2.y + 100) {
        window->die_alien_2 = 1;
        game->pos_alien_2.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_2.x && game->pos_bombattack_3.x <= game->pos_alien_2.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_2.y && game->pos_bombattack_3.y <= game->pos_alien_2.y + 100) {
        window->die_alien_2 = 1;
        game->pos_alien_2.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_2.x && game->pos_bombattack_4.x <= game->pos_alien_2.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_2.y && game->pos_bombattack_4.y <= game->pos_alien_2.y + 100) {
        window->die_alien_2 = 1;
        game->pos_alien_2.x = -100;
    }
}

void die_alien_3(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_3.x && game->pos_bombattack.x <= game->pos_alien_3.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_3.y && game->pos_bombattack.y <= game->pos_alien_3.y + 100) {
        window->die_alien_3 = 1;
        game->pos_alien_3.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_3.x && game->pos_bombattack_2.x <= game->pos_alien_3.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_3.y && game->pos_bombattack_2.y <= game->pos_alien_3.y + 100) {
        window->die_alien_3 = 1;
        game->pos_alien_3.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_3.x && game->pos_bombattack_3.x <= game->pos_alien_3.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_3.y && game->pos_bombattack_3.y <= game->pos_alien_3.y + 100) {
        window->die_alien_3 = 1;
        game->pos_alien_3.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_3.x && game->pos_bombattack_4.x <= game->pos_alien_3.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_3.y && game->pos_bombattack_4.y <= game->pos_alien_3.y + 100) {
        window->die_alien_3 = 1;
        game->pos_alien_3.x = -100;
    }
}

void die_alien_4(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_4.x && game->pos_bombattack.x <= game->pos_alien_4.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_4.y && game->pos_bombattack.y <= game->pos_alien_4.y + 100) {
        window->die_alien_4 = 1;
        game->pos_alien_4.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_4.x && game->pos_bombattack_2.x <= game->pos_alien_4.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_4.y && game->pos_bombattack_2.y <= game->pos_alien_4.y + 100) {
        window->die_alien_4 = 1;
        game->pos_alien_4.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_4.x && game->pos_bombattack_3.x <= game->pos_alien_4.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_4.y && game->pos_bombattack_3.y <= game->pos_alien_4.y + 100) {
        window->die_alien_4 = 1;
        game->pos_alien_4.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_4.x && game->pos_bombattack_4.x <= game->pos_alien_4.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_4.y && game->pos_bombattack_4.y <= game->pos_alien_4.y + 100) {
        window->die_alien_4 = 1;
        game->pos_alien_4.x = -100;
    }
}

void die_alien_5(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_5.x && game->pos_bombattack.x <= game->pos_alien_5.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_5.y && game->pos_bombattack.y <= game->pos_alien_5.y + 100) {
        window->die_alien_5 = 1;
        game->pos_alien_5.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_10.x && game->pos_bombattack_2.x <= game->pos_alien_5.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_10.y && game->pos_bombattack_2.y <= game->pos_alien_5.y + 100) {
        window->die_alien_5 = 1;
        game->pos_alien_5.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_5.x && game->pos_bombattack_3.x <= game->pos_alien_5.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_5.y && game->pos_bombattack_3.y <= game->pos_alien_5.y + 100) {
        window->die_alien_5 = 1;
        game->pos_alien_5.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_5.x && game->pos_bombattack_4.x <= game->pos_alien_5.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_5.y && game->pos_bombattack_4.y <= game->pos_alien_5.y + 100) {
        window->die_alien_5 = 1;
        game->pos_alien_5.x = -100;
    }
}

void die_alien_6(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_6.x && game->pos_bombattack.x <= game->pos_alien_6.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_6.y && game->pos_bombattack.y <= game->pos_alien_6.y + 100) {
        window->die_alien_6 = 1;
        game->pos_alien_6.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_6.x && game->pos_bombattack_2.x <= game->pos_alien_6.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_6.y && game->pos_bombattack_2.y <= game->pos_alien_6.y + 100) {
        window->die_alien_6 = 1;
        game->pos_alien_6.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_6.x && game->pos_bombattack_3.x <= game->pos_alien_6.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_6.y && game->pos_bombattack_3.y <= game->pos_alien_6.y + 100) {
        window->die_alien_6 = 1;
        game->pos_alien_6.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_6.x && game->pos_bombattack_4.x <= game->pos_alien_6.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_6.y && game->pos_bombattack_4.y <= game->pos_alien_6.y + 100) {
        window->die_alien_6 = 1;
        game->pos_alien_6.x = -100;
    }
}

void die_alien_7(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_7.x && game->pos_bombattack.x <= game->pos_alien_7.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_7.y && game->pos_bombattack.y <= game->pos_alien_7.y + 100) {
        window->die_alien_7 = 1;
        game->pos_alien_7.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_7.x && game->pos_bombattack_2.x <= game->pos_alien_7.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_7.y && game->pos_bombattack_2.y <= game->pos_alien_7.y + 100) {
        window->die_alien_7 = 1;
        game->pos_alien_7.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_7.x && game->pos_bombattack_3.x <= game->pos_alien_7.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_7.y && game->pos_bombattack_3.y <= game->pos_alien_7.y + 100) {
        window->die_alien_7 = 1;
        game->pos_alien_7.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_7.x && game->pos_bombattack_4.x <= game->pos_alien_7.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_7.y && game->pos_bombattack_4.y <= game->pos_alien_7.y + 100) {
        window->die_alien_7 = 1;
        game->pos_alien_7.x = -100;
    }
}

void die_alien_8(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_8.x && game->pos_bombattack.x <= game->pos_alien_8.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_8.y && game->pos_bombattack.y <= game->pos_alien_8.y + 100) {
        window->die_alien_8 = 1;
        game->pos_alien_8.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_8.x && game->pos_bombattack_2.x <= game->pos_alien_8.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_8.y && game->pos_bombattack_2.y <= game->pos_alien_8.y + 100) {
        window->die_alien_8 = 1;
        game->pos_alien_8.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_8.x && game->pos_bombattack_3.x <= game->pos_alien_8.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_8.y && game->pos_bombattack_3.y <= game->pos_alien_8.y + 100) {
        window->die_alien_8 = 1;
        game->pos_alien_8.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_8.x && game->pos_bombattack_4.x <= game->pos_alien_8.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_8.y && game->pos_bombattack_4.y <= game->pos_alien_8.y + 100) {
        window->die_alien_8 = 1;
        game->pos_alien_8.x = -100;
    }
}

void die_alien_9(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_9.x && game->pos_bombattack.x <= game->pos_alien_9.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_9.y && game->pos_bombattack.y <= game->pos_alien_9.y + 100) {
        window->die_alien_9 = 1;
        game->pos_alien_9.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_10.x && game->pos_bombattack_2.x <= game->pos_alien_9.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_9.y && game->pos_bombattack_2.y <= game->pos_alien_9.y + 100) {
        window->die_alien_9 = 1;
        game->pos_alien_9.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_9.x && game->pos_bombattack_3.x <= game->pos_alien_9.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_9.y && game->pos_bombattack_3.y <= game->pos_alien_9.y + 100) {
        window->die_alien_9 = 1;
        game->pos_alien_9.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_9.x && game->pos_bombattack_4.x <= game->pos_alien_9.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_9.y && game->pos_bombattack_4.y <= game->pos_alien_9.y + 100) {
        window->die_alien_9 = 1;
        game->pos_alien_9.x = -100;
    }
}

void die_alien_10(gameplay *game, display *window)
{
    if (game->pos_bombattack.x >= game->pos_alien_10.x && game->pos_bombattack.x <= game->pos_alien_10.x + 100 &&
    game->pos_bombattack.y >= game->pos_alien_10.y && game->pos_bombattack.y <= game->pos_alien_10.y + 100) {
        window->die_alien_10 = 1;
        game->pos_alien_10.x = -100;
    }
    if (game->pos_bombattack_2.x >= game->pos_alien_10.x && game->pos_bombattack_2.x <= game->pos_alien_10.x + 100 &&
    game->pos_bombattack_2.y >= game->pos_alien_10.y && game->pos_bombattack_2.y <= game->pos_alien_10.y + 100) {
        window->die_alien_10 = 1;
        game->pos_alien_10.x = -100;
    }
    if (game->pos_bombattack_3.x >= game->pos_alien_10.x && game->pos_bombattack_3.x <= game->pos_alien_10.x + 100 &&
    game->pos_bombattack_3.y >= game->pos_alien_10.y && game->pos_bombattack_3.y <= game->pos_alien_10.y + 100) {
        window->die_alien_10 = 1;
        game->pos_alien_10.x = -100;
    }
    if (game->pos_bombattack_4.x >= game->pos_alien_10.x && game->pos_bombattack_4.x <= game->pos_alien_10.x + 100 &&
    game->pos_bombattack_4.y >= game->pos_alien_10.y && game->pos_bombattack_4.y <= game->pos_alien_10.y + 100) {
        window->die_alien_10 = 1;
        game->pos_alien_10.x = -100;
    }
}