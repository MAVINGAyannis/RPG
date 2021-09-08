/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation_move.c
*/

#include "../../include/rpg.h"

void animation_mvright(move_p *mvc)
{
    mvc->time_mvright = sfClock_getElapsedTime(mvc->clock_mvright);
    mvc->sec_mvright = mvc->time_mvright.microseconds / 1000000.0;
    if (mvc->sec_mvright > 0.08) {
        mvc->rect_mvright.left += 64;
        if (mvc->rect_mvright.left >= 360)
            mvc->rect_mvright.left = 0;
        sfClock_restart(mvc->clock_mvright);
    }
    sfSprite_setTextureRect(mvc->sprite_mvright, mvc->rect_mvright);
}

void animation_mvleft(move_p *mvc)
{
    mvc->time_mvleft = sfClock_getElapsedTime(mvc->clock_mvleft);
    mvc->sec_mvleft = mvc->time_mvleft.microseconds / 1000000.0;
    if (mvc->sec_mvleft > 0.08) {
        mvc->rect_mvleft.left += 46.25;
        if (mvc->rect_mvleft.left >= 360)
            mvc->rect_mvleft.left = 0;
        sfClock_restart(mvc->clock_mvleft);
    }
    sfSprite_setTextureRect(mvc->sprite_mvleft, mvc->rect_mvleft);
}

void animation_mvfont(move_p *mvc)
{
    mvc->time_mvfont = sfClock_getElapsedTime(mvc->clock_mvfont);
    mvc->sec_mvfont = mvc->time_mvfont.microseconds / 1000000.0;
    if (mvc->sec_mvfont > 0.08) {
        mvc->rect_mvfont.left += 53;
        if (mvc->rect_mvfont.left >= 360)
            mvc->rect_mvfont.left = 0;
        sfClock_restart(mvc->clock_mvfont);
    }
    sfSprite_setTextureRect(mvc->sprite_mvfont, mvc->rect_mvfont);
}

void animation_mvback(move_p *mvc)
{
    mvc->time_mvback = sfClock_getElapsedTime(mvc->clock_mvback);
    mvc->sec_mvback = mvc->time_mvback.microseconds / 1000000.0;
    if (mvc->sec_mvback > 0.08) {
        mvc->rect_mvback.left += 55;
        if (mvc->rect_mvback.left >= 360)
            mvc->rect_mvback.left = 0;
        sfClock_restart(mvc->clock_mvback);
    }
    sfSprite_setTextureRect(mvc->sprite_mvback, mvc->rect_mvback);
}

void animation_alien(gameplay *game)
{
    game->time_alien = sfClock_getElapsedTime(game->clock_alien);
    game->seconds_alien = game->time_alien.microseconds / 1000000.0;
    if (game->seconds_alien > 0.06) {
        game->rect_alien.left += 110;
        if (game->rect_alien.left >= 3957)
            game->rect_alien.left = 0;
        sfClock_restart(game->clock_alien);
    }
    sfSprite_setTextureRect(game->sprite_alien, game->rect_alien);
}

void animation_alien_2(gameplay *game)
{
    game->time_alien_2 = sfClock_getElapsedTime(game->clock_alien_2);
    game->seconds_alien_2 = game->time_alien_2.microseconds / 1000000.0;
    if (game->seconds_alien_2 > 0.06) {
        game->rect_alien_2.left += 110;
        if (game->rect_alien_2.left >= 3957)
            game->rect_alien_2.left = 0;
        sfClock_restart(game->clock_alien_2);
    }
    sfSprite_setTextureRect(game->sprite_alien_2, game->rect_alien_2);
}

void animation_alien_3(gameplay *game)
{
    game->time_alien_3 = sfClock_getElapsedTime(game->clock_alien_3);
    game->seconds_alien_3 = game->time_alien_3.microseconds / 1000000.0;
    if (game->seconds_alien_3 > 0.06) {
        game->rect_alien_3.left += 110;
        if (game->rect_alien_3.left >= 3957)
            game->rect_alien_3.left = 0;
        sfClock_restart(game->clock_alien_3);
    }
    sfSprite_setTextureRect(game->sprite_alien_3, game->rect_alien_3);
}

void animation_alien_4(gameplay *game)
{
    game->time_alien_4 = sfClock_getElapsedTime(game->clock_alien_4);
    game->seconds_alien_4 = game->time_alien_4.microseconds / 1000000.0;
    if (game->seconds_alien_4 > 0.06) {
        game->rect_alien_4.left += 110;
        if (game->rect_alien_4.left >= 3957)
            game->rect_alien_4.left = 0;
        sfClock_restart(game->clock_alien_4);
    }
    sfSprite_setTextureRect(game->sprite_alien_4, game->rect_alien_4);
}

void animation_alien_5(gameplay *game)
{
    game->time_alien_5 = sfClock_getElapsedTime(game->clock_alien_5);
    game->seconds_alien_5 = game->time_alien_5.microseconds / 1000000.0;
    if (game->seconds_alien_5 > 0.06) {
        game->rect_alien_5.left += 110;
        if (game->rect_alien_5.left >= 3957)
            game->rect_alien_5.left = 0;
        sfClock_restart(game->clock_alien_5);
    }
    sfSprite_setTextureRect(game->sprite_alien_5, game->rect_alien_5);
}

void animation_alien_6(gameplay *game)
{
    game->time_alien_6 = sfClock_getElapsedTime(game->clock_alien_6);
    game->seconds_alien_6 = game->time_alien_6.microseconds / 1000000.0;
    if (game->seconds_alien_6 > 0.06) {
        game->rect_alien_6.left += 110;
        if (game->rect_alien_6.left >= 3957)
            game->rect_alien_6.left = 0;
        sfClock_restart(game->clock_alien_6);
    }
    sfSprite_setTextureRect(game->sprite_alien_6, game->rect_alien_6);
}

void animation_alien_7(gameplay *game)
{
    game->time_alien_7 = sfClock_getElapsedTime(game->clock_alien_7);
    game->seconds_alien_7 = game->time_alien_7.microseconds / 1000000.0;
    if (game->seconds_alien_7 > 0.06) {
        game->rect_alien_7.left += 110;
        if (game->rect_alien_7.left >= 3957)
            game->rect_alien_7.left = 0;
        sfClock_restart(game->clock_alien_7);
    }
    sfSprite_setTextureRect(game->sprite_alien_7, game->rect_alien_7);
}

void animation_alien_8(gameplay *game)
{
    game->time_alien_8 = sfClock_getElapsedTime(game->clock_alien_8);
    game->seconds_alien_8 = game->time_alien_8.microseconds / 1000000.0;
    if (game->seconds_alien_8 > 0.06) {
        game->rect_alien_8.left += 110;
        if (game->rect_alien_8.left >= 3957)
            game->rect_alien_8.left = 0;
        sfClock_restart(game->clock_alien_8);
    }
    sfSprite_setTextureRect(game->sprite_alien_8, game->rect_alien_8);
}

void animation_alien_9(gameplay *game)
{
    game->time_alien_9 = sfClock_getElapsedTime(game->clock_alien_9);
    game->seconds_alien_9 = game->time_alien_9.microseconds / 1000000.0;
    if (game->seconds_alien_9 > 0.06) {
        game->rect_alien_9.left += 110;
        if (game->rect_alien_9.left >= 3957)
            game->rect_alien_9.left = 0;
        sfClock_restart(game->clock_alien_9);
    }
    sfSprite_setTextureRect(game->sprite_alien_9, game->rect_alien_9);
}

void animation_alien_10(gameplay *game)
{
    game->time_alien_10 = sfClock_getElapsedTime(game->clock_alien_10);
    game->seconds_alien_10 = game->time_alien_10.microseconds / 1000000.0;
    if (game->seconds_alien_10 > 0.06) {
        game->rect_alien_10.left += 110;
        if (game->rect_alien_10.left >= 3957)
            game->rect_alien_10.left = 0;
        sfClock_restart(game->clock_alien_10);
    }
    sfSprite_setTextureRect(game->sprite_alien_10, game->rect_alien_10);
}