/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** my_rpg.c
*/

#define TRUE 1
#define FALSE 0

#include <stdlib.h>
#include "include/rpg.h"

void set_mouse_cursor(prcpl *ecr_prcpl, display *window)
{
    ecr_prcpl->pos_cursor.x = sfMouse_getPositionRenderWindow(window->window).x -25, 0;
    ecr_prcpl->pos_cursor.y = sfMouse_getPositionRenderWindow(window->window).y -30, 0;
    if (window->i == 1) {
        ecr_prcpl->pos_cursor_game.x = sfMouse_getPositionRenderWindow(window->window).x -25, 0;
        ecr_prcpl->pos_cursor_game.y = sfMouse_getPositionRenderWindow(window->window).y -30, 0;
    }
}

void intialisation_function(prcpl *ecr_prcpl, display *window, move_p *mvc, gameplay *game)
{
    create_from_file(ecr_prcpl, mvc, game);
    create_sprite(ecr_prcpl, mvc, game);
    create_texture(ecr_prcpl, mvc, game);
    set_pos(ecr_prcpl, mvc, game);
    texture_rect(ecr_prcpl, mvc, game);
    set_rect(ecr_prcpl, mvc, game);
    sfRenderWindow_setMouseCursorVisible(window->window, sfFalse);
}

void game_loop(prcpl *ecr_prcpl, display *window, move_p *mvc, gameplay *game)
{
    event_function(ecr_prcpl, window);
    render_draw_sprite(ecr_prcpl, window, mvc, game);
    animation_logo(ecr_prcpl);
    sprite_pos(ecr_prcpl, mvc, game);
    mouse_click(ecr_prcpl, window, game);
    set_mouse_cursor(ecr_prcpl, window);
    if (window->i == 1) {
        move_p_right(mvc, ecr_prcpl, window, game);
        move_p_left(mvc, ecr_prcpl, window, game);
        move_p_front(mvc, ecr_prcpl, window, game);
        move_p_back(mvc, ecr_prcpl, window, game);
        set_attack(window, mvc);
        animation_alien(game);
        animation_alien_2(game);
        animation_alien_3(game);
        animation_alien_4(game);
        animation_alien_5(game);
        animation_alien_6(game);
        animation_alien_7(game);
        animation_alien_8(game);
        animation_alien_9(game);
        animation_alien_10(game);
        attack_bomb_1(game, window);
        attack_bomb_2(game, window);
        set_collision_1(game, window, mvc);
        set_collision_2(game, window, mvc);
        set_collision_3(game, window, mvc);
        set_collision_4(game, window, mvc);
        set_collision_5(game, window, mvc);
        set_collision_6(game, window, mvc);
        set_collision_7(game, window, mvc);
        set_collision_8(game, window, mvc);
        set_collision_9(game, window, mvc);
        set_collision_10(game, window, mvc);
        die_alien(game, window);
        die_alien_2(game, window);
        die_alien_3(game, window);
        die_alien_4(game, window);
        die_alien_5(game, window);
        die_alien_6(game, window);
        die_alien_7(game, window);
        die_alien_8(game, window);
        die_alien_9(game, window);
        die_alien_10(game, window);
        die_link(mvc, game, window, ecr_prcpl);
        get_victory(game, mvc, window);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_cursor_game, NULL);
    }
}

void main_open(prcpl *ecr_prcpl, display *window, move_p *mvc, gameplay *game)
{
    size_t oui = 64;
    window = malloc(sizeof(display));
    ecr_prcpl = malloc(sizeof(prcpl));
    window->pixels = (sfVideoMode) {1920, 1080, 64};
    window->window = sfRenderWindow_create(window->pixels, "my_rpg",
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window->window, oui);

    intialisation_function(ecr_prcpl, window, mvc, game);
    while (sfRenderWindow_isOpen(window->window) && window->die == FALSE) {
        game_loop(ecr_prcpl, window, mvc, game);
        sfRenderWindow_display(window->window);
    }
}

int main(void)
{
    prcpl ecr_prcpl;
    display window;
    move_p mvc;
    gameplay game;

    main_open(&ecr_prcpl, &window, &mvc, &game);
}