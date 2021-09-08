/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** render_draw_sprite.c
*/

#include "../../include/rpg.h"

void render_draw_sprite(prcpl *ecr_prcpl, display *window,
move_p *mvc, gameplay *game)
{
    sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_font_prcpl,
    NULL);
    sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_logoa, NULL);
    sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_logo, NULL);
    sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_play, NULL);
    sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_quit, NULL);
    interaction_button(ecr_prcpl, window, game);
    sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_cursor, NULL);
    set_elements(ecr_prcpl, window, mvc, game);
    draw_cinematique(ecr_prcpl, window, mvc, game);
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        sfRenderWindow_drawSprite(window->window, game->sprite_touches, NULL);
}

void set_elements(prcpl *ecr_prcpl, display *window, move_p *mvc,
gameplay *game)
{
    if (window->i == 1) {
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_map_gauche, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_map_milieu, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_map_droite, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_minimap_gauche, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_minimap_milieu, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_minimap_droite, NULL);
        sfRenderWindow_drawSprite(window->window, mvc->sprite_redcircle, NULL);
        if (window->die_alien == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien, NULL);
        if (window->die_alien_2 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_2, NULL);
        if (window->die_alien_3 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_3, NULL);
        if (window->die_alien_4 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_4, NULL);
        if (window->die_alien_5 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_5, NULL);
        if (window->die_alien_6 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_6, NULL);
        if (window->die_alien_7 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_7, NULL);
        if (window->die_alien_8 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_8, NULL);
        if (window->die_alien_9 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_9, NULL);
        if (window->die_alien_10 == 0)
        sfRenderWindow_drawSprite(window->window, game->sprite_alien_10, NULL);
        sfRenderWindow_drawSprite(window->window, game->sprite_zelda_game, NULL);
        set_draw_zelda(window, mvc);
        set_draw_attack(window, mvc);
    }
}

void draw_cinematique(prcpl *ecr_prcpl, display *window, move_p *mvc, gameplay *game)
{
    mvc->pos_link_spawn.x -= 1.5;
    ecr_prcpl->pos_map_gauche_cinematique.x -= 1.5;
    ecr_prcpl->pos_map_milieu_cinematique.x -= 1.5;
    ecr_prcpl->pos_map_droite_cinematique.x -= 1.5;
    game->pos_zelda.x -= 1.5;
    if (mvc->pos_link_spawn.x >= 0) {
        sfRenderWindow_drawSprite(window->window, mvc->sprite_linkspawn, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_map_gauche_cinematique, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_map_milieu_cinematique, NULL);
        sfRenderWindow_drawSprite(window->window, ecr_prcpl->sprite_map_droite_cinematique, NULL);
        if (mvc->pos_link_spawn.x >= 1300) 
            sfRenderWindow_drawSprite(window->window, game->sprite_cinem1, NULL);
        if (mvc->pos_link_spawn.x >= 700 && mvc->pos_link_spawn.x <= 1300)
            sfRenderWindow_drawSprite(window->window, game->sprite_cinem2, NULL);
        if (mvc->pos_link_spawn.x >= 0 && mvc->pos_link_spawn.x <= 700)
            sfRenderWindow_drawSprite(window->window, game->sprite_cinem3, NULL);
        sfRenderWindow_drawSprite(window->window, game->sprite_zelda, NULL);
    }
}