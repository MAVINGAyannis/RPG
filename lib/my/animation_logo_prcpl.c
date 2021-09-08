/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation_logo_prcpl.c
*/

#include "../../include/rpg.h"

void animation_logo(prcpl *ecr_prcpl)
{
    ecr_prcpl->time_prcpl = sfClock_getElapsedTime(ecr_prcpl->clock_prcpl);
    ecr_prcpl->sec_prcpl = ecr_prcpl->time_prcpl.microseconds / 1000000.0;
    if (ecr_prcpl->sec_prcpl > 0.04) {
        ecr_prcpl->rect_logo.left += 200;
        if (ecr_prcpl->rect_logo.left >= 8800)
            ecr_prcpl->rect_logo.left = 0;
        sfClock_restart(ecr_prcpl->clock_prcpl);
    }
    sfSprite_setTextureRect(ecr_prcpl->sprite_logoa, ecr_prcpl->rect_logo);
}