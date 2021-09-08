/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_die_link_aliens.c
*/

#include "../../include/rpg.h"

void set_collision_1(gameplay *game, display *window, move_p *mvc)
{
    window->die_link = 0;

    if (mvc->pos_mvright.x >= game->pos_alien.x && mvc->pos_mvright.x <= game->pos_alien.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien.y + 50)
        window->die_link = 1;
    if (mvc->pos_mvleft.x >= game->pos_alien.x && mvc->pos_mvleft.x <= game->pos_alien.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien.y - 20 && 
    mvc->pos_mvleft.y <= game->pos_alien.y + 50)
        window->die_link = 1;
    if (mvc->pos_mvfont.x >= game->pos_alien.x && mvc->pos_mvfont.x <= game->pos_alien.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien.y -20 && 
    mvc->pos_mvfont.y <= game->pos_alien_10.y + 50)
        window->die_link = 1;
    if (mvc->pos_mvback.x >= game->pos_alien.x && mvc->pos_mvback.x <= game->pos_alien.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien.y -20 && 
    mvc->pos_mvback.y <= game->pos_alien.y + 50)
        window->die_link = 1;
}

void set_collision_2(gameplay *game, display *window,move_p *mvc)
{
    window->die_link_2 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_2.x && mvc->pos_mvright.x <= game->pos_alien_2.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_2.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_2.y + 50)
        window->die_link_2 = 1;
    if (mvc->pos_mvleft.x >= game->pos_alien_2.x && mvc->pos_mvleft.x <= game->pos_alien_2.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_2.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_2.y + 50)
        window->die_link_2 = 1;
    if (mvc->pos_mvfont.x >= game->pos_alien_2.x && mvc->pos_mvfont.x <= game->pos_alien_2.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_2.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_2.y + 50)
        window->die_link_2 = 1;
    if (mvc->pos_mvback.x >= game->pos_alien_2.x && mvc->pos_mvback.x <= game->pos_alien_2.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_2.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_2.y + 50)
        window->die_link_2 = 1;
}

void set_collision_3(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_3 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_3.x && mvc->pos_mvright.x <= game->pos_alien_3.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_3.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_3.y + 50)
        window->die_link_3 = 1;
    if (mvc->pos_mvleft.x >= game->pos_alien_3.x && mvc->pos_mvleft.x <= game->pos_alien_3.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_3.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_3.y + 50)
        window->die_link_3 = 1;
    if (mvc->pos_mvfont.x >= game->pos_alien_3.x && mvc->pos_mvfont.x <= game->pos_alien_3.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_3.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_3.y + 50)
        window->die_link_3 = 1;
    if (mvc->pos_mvback.x >= game->pos_alien_3.x && mvc->pos_mvback.x <= game->pos_alien_3.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_3.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_3.y + 50)
        window->die_link_3 = 1;
}

void set_collision_4(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_4 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_4.x && mvc->pos_mvright.x <= game->pos_alien_4.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_4.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_4.y + 50)
        window->die_link_4 = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_4.x && mvc->pos_mvleft.x <= game->pos_alien_4.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_4.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_4.y + 50)
        window->die_link_4 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_4.x && mvc->pos_mvfont.x <= game->pos_alien_4.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_4.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_4.y + 50)
        window->die_link_4 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_4.x && mvc->pos_mvback.x <= game->pos_alien_4.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_4.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_4.y + 50)
        window->die_link_4 = 1;
}

void set_collision_5(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_5 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_5.x && mvc->pos_mvright.x <= game->pos_alien_5.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_5.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_5.y + 50)
        window->die_link_5 = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_5.x && mvc->pos_mvleft.x <= game->pos_alien_5.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_5.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_5.y + 50)
        window->die_link_5 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_5.x && mvc->pos_mvfont.x <= game->pos_alien_5.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_5.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_5.y + 50)
        window->die_link_5 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_5.x && mvc->pos_mvback.x <= game->pos_alien_5.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_5.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_5.y + 50)
        window->die_link_5 = 1;
}

void set_collision_6(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_6 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_6.x && mvc->pos_mvright.x <= game->pos_alien_6.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_6.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_6.y + 50)
        window->die_link_6 = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_6.x && mvc->pos_mvleft.x <= game->pos_alien_6.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_6.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_6.y + 50)
        window->die_link_6 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_6.x && mvc->pos_mvfont.x <= game->pos_alien_6.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_6.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_6.y + 50)
        window->die_link_6 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_6.x && mvc->pos_mvback.x <= game->pos_alien_6.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_6.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_6.y + 50)
        window->die_link_6 = 1;
}

void set_collision_7(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_7 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_7.x && mvc->pos_mvright.x <= game->pos_alien_7.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_7.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_7.y + 50)
        window->die_link_7 = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_7.x && mvc->pos_mvleft.x <= game->pos_alien_7.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_7.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_7.y + 50)
        window->die_link_7 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_7.x && mvc->pos_mvfont.x <= game->pos_alien_7.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_7.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_7.y + 50)
        window->die_link_7 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_7.x && mvc->pos_mvback.x <= game->pos_alien_7.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_7.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_7.y + 50)
        window->die_link_7 = 1;
}

void set_collision_8(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_8 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_8.x && mvc->pos_mvright.x <= game->pos_alien_8.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_8.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_8.y + 50)
        window->die_link_8 = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_8.x && mvc->pos_mvleft.x <= game->pos_alien_8.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_8.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_8.y + 50)
        window->die_link_8 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_8.x && mvc->pos_mvfont.x <= game->pos_alien_8.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_8.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_8.y + 50)
        window->die_link_8 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_8.x && mvc->pos_mvback.x <= game->pos_alien_8.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_8.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_8.y + 50)
        window->die_link_8 = 1;
}

void set_collision_9(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_9 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_9.x && mvc->pos_mvright.x <= game->pos_alien_9.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_9.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_9.y + 50)
        window->die_link_9 = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_9.x && mvc->pos_mvleft.x <= game->pos_alien_9.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_9.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_9.y + 50)
        window->die_link_9 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_9.x && mvc->pos_mvfont.x <= game->pos_alien_9.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_9.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_9.y + 50)
        window->die_link_9 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_9.x && mvc->pos_mvback.x <= game->pos_alien_9.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_9.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_9.y + 50)
        window->die_link_9 = 1;
}

void set_collision_10(gameplay *game, display *window, move_p *mvc)
{
    window->die_link_10 = 0;

    if (mvc->pos_mvright.x >= game->pos_alien_10.x && mvc->pos_mvright.x <=
    game->pos_alien_10.x + 50 && mvc->pos_mvright.y + 20 >= game->pos_alien_10.y - 20 &&
    mvc->pos_mvright.y <= game->pos_alien_10.y + 50)
        window->die_link = 1;

    if (mvc->pos_mvleft.x >= game->pos_alien_10.x && mvc->pos_mvleft.x
    <= game->pos_alien_10.x + 50 && mvc->pos_mvleft.y + 20 >= game->pos_alien_10.y - 20 &&
    mvc->pos_mvleft.y <= game->pos_alien_10.y + 50)
        window->die_link_10 = 1;

    if (mvc->pos_mvfont.x >= game->pos_alien_10.x && mvc->pos_mvfont.x<= game->pos_alien_10.x + 50 && mvc->pos_mvfont.y + 20 >= game->pos_alien_10.y -20 &&
    mvc->pos_mvfont.y <= game->pos_alien_10.y + 50)
        window->die_link_10 = 1;

    if (mvc->pos_mvback.x >= game->pos_alien_10.x && mvc->pos_mvback.x <= game->pos_alien_10.x + 50 && mvc->pos_mvback.y + 20 >= game->pos_alien_10.y -20 &&
    mvc->pos_mvback.y <= game->pos_alien_10.y + 50)
        window->die_link_10 = 1;
}