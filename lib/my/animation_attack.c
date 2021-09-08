/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation_attack.c
*/

#include "../../include/rpg.h"

void animation_attack_right(move_p *mvc, display *window)
{
    mvc->time_a_right = sfClock_getElapsedTime(mvc->clock_a_right);
    mvc->sec_a_right = mvc->time_a_right.microseconds / 1000000.0;
    if (mvc->sec_a_right > 0.2) {
        mvc->rect_a_right.left += 74;
        if (mvc->rect_a_right.left <= 360)
            window->right = 0;
        if (mvc->rect_a_right.left >= 360)
            window->right = 1;
        sfClock_restart(mvc->clock_a_right);
    }
    sfSprite_setTextureRect(mvc->sprite_atck_right, mvc->rect_a_right);
}

void animation_attack_left(move_p *mvc, display *window)
{
    mvc->time_a_left = sfClock_getElapsedTime(mvc->clock_a_left);
    mvc->sec_a_left = mvc->time_a_left.microseconds / 1000000.0;
    if (mvc->sec_a_left > 0.2) {
        mvc->rect_a_left.left += 74;
        if (mvc->rect_a_left.left <= 360)
            window->left = 0;
        if (mvc->rect_a_left.left >= 360)
            window->left = 1;
        sfClock_restart(mvc->clock_a_left);
    }
    sfSprite_setTextureRect(mvc->sprite_atck_left, mvc->rect_a_left);
}

void animation_attack_front(move_p *mvc, display *window)
{
    mvc->time_a_front = sfClock_getElapsedTime(mvc->clock_a_front);
    mvc->sec_a_front = mvc->time_a_front.microseconds / 1000000.0;
    if (mvc->sec_a_front > 0.2) {
        mvc->rect_a_front.left += 74;
        if (mvc->rect_a_front.left <= 360)
            window->front = 0;
        if (mvc->rect_a_front.left >= 360)
            window->front = 1;
        sfClock_restart(mvc->clock_a_front);
    }
    sfSprite_setTextureRect(mvc->sprite_atck_front, mvc->rect_a_front);
}

void animation_attack_back(move_p *mvc, display *window)
{
    mvc->time_a_back = sfClock_getElapsedTime(mvc->clock_a_back);
    mvc->sec_a_back = mvc->time_a_back.microseconds / 1000000.0;
    if (mvc->sec_a_back > 0.2) {
        mvc->rect_a_back.left += 74;
        if (mvc->rect_a_back.left <= 360)
            window->back = 0;
        if (mvc->rect_a_back.left >= 360)
            window->back = 1;
        sfClock_restart(mvc->clock_a_back);
    }
    sfSprite_setTextureRect(mvc->sprite_atck_back, mvc->rect_a_back);
}