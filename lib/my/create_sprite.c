/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** create_sprite.c
*/

#include "../../include/rpg.h"

void create_sprite(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    ecr_prcpl->sprite_font_prcpl = sfSprite_create();
    ecr_prcpl->sprite_logoa = sfSprite_create();
    ecr_prcpl->sprite_logo = sfSprite_create();
    ecr_prcpl->sprite_play = sfSprite_create();
    ecr_prcpl->sprite_quit = sfSprite_create();
    ecr_prcpl->sprite_play_surbr = sfSprite_create();
    ecr_prcpl->sprite_quit_surbr = sfSprite_create();
    ecr_prcpl->sprite_map_gauche = sfSprite_create();
    ecr_prcpl->sprite_map_milieu = sfSprite_create();
    ecr_prcpl->sprite_map_droite = sfSprite_create();
    ecr_prcpl->sprite_minimap_gauche = sfSprite_create();
    ecr_prcpl->sprite_minimap_milieu = sfSprite_create();
    ecr_prcpl->sprite_minimap_droite = sfSprite_create();
    ecr_prcpl->sprite_cursor = sfSprite_create();
    create_sprite_2(game);
    create_sprite_3(mvc, game);
    create_sprite_4(game, ecr_prcpl, mvc);
    create_sprite_5(game);
}

void create_sprite_2(gameplay *game)
{
    game->sprite_bombattack = sfSprite_create();
    game->sprite_alien = sfSprite_create();
    game->sprite_alien_2 = sfSprite_create();
    game->sprite_alien_3 = sfSprite_create();
    game->sprite_alien_4 = sfSprite_create();
    game->sprite_alien_5 = sfSprite_create();
    game->sprite_alien_6 = sfSprite_create();
    game->sprite_alien_7 = sfSprite_create();
    game->sprite_alien_8 = sfSprite_create();
    game->sprite_alien_9 = sfSprite_create();
    game->sprite_alien_10 = sfSprite_create();
    game->clock_alien = sfClock_create();
    game->clock_alien_2 = sfClock_create();
    game->clock_alien_3 = sfClock_create();
    game->clock_alien_4 = sfClock_create();
    game->clock_alien_5 = sfClock_create();
    game->clock_alien_6 = sfClock_create();
    game->clock_alien_7 = sfClock_create();
    game->clock_alien_8 = sfClock_create();
}

void create_sprite_3(move_p *mvc, gameplay *game)
{
    mvc->sprite_mvright = sfSprite_create();
    mvc->sprite_mvleft = sfSprite_create();
    mvc->sprite_mvfont = sfSprite_create();
    mvc->sprite_mvback = sfSprite_create();
    mvc->sprite_linkspawn = sfSprite_create();
    mvc->clock_mvright = sfClock_create();
    mvc->clock_mvleft = sfClock_create();
    mvc->clock_mvfont = sfClock_create();
    mvc->clock_mvback = sfClock_create();
    mvc->clock_a_right = sfClock_create();
    mvc->clock_a_left = sfClock_create();
    mvc->clock_a_front = sfClock_create();
    mvc->clock_a_back = sfClock_create();
    mvc->sprite_redcircle = sfSprite_create();
    mvc->sprite_atck_right = sfSprite_create();
    mvc->sprite_atck_left = sfSprite_create();
    mvc->sprite_atck_front = sfSprite_create();
    mvc->sprite_atck_back = sfSprite_create();
    game->clock_alien_9 = sfClock_create();
}

void create_sprite_4(gameplay *game, prcpl *ecr_prcpl, move_p *mvc)
{
    ecr_prcpl->sprite_cursor_game = sfSprite_create();
    ecr_prcpl->sprite_minimap_gauche = sfSprite_create();
    ecr_prcpl->clock_prcpl = sfClock_create();
    game->clock_alien_10 = sfClock_create();
    ecr_prcpl->sprite_map_gauche_cinematique = sfSprite_create();
    ecr_prcpl->sprite_map_milieu_cinematique = sfSprite_create();
    ecr_prcpl->sprite_map_droite_cinematique = sfSprite_create();
    game->sprite_cinem1 = sfSprite_create();
    game->sprite_cinem2 = sfSprite_create();
    game->sprite_cinem3 = sfSprite_create();
    game->sprite_zelda = sfSprite_create();
    game->sprite_zelda_game = sfSprite_create();
    game->sprite_touches = sfSprite_create();
    game->sprite_fond_go = sfSprite_create();
    mvc->sprite_fond_noir = sfSprite_create();
    mvc->sprite_linkspawn_2 = sfSprite_create();
    game->sprite_dielink = sfSprite_create();
    game->sprite_quit_go = sfSprite_create();
    game->sprite_quit_surbr_go = sfSprite_create();
}

void create_sprite_5(gameplay *game)
{
    game->sprite_bombattack_2 = sfSprite_create();
    game->sprite_bombattack_3 = sfSprite_create();
    game->sprite_bombattack_4 = sfSprite_create();
    game->sprite_bombattack_5 = sfSprite_create();
    game->sprite_bombattack_6 = sfSprite_create();
    game->sprite_bombattack_7 = sfSprite_create();
    game->sprite_bombattack_8 = sfSprite_create();
    game->sprite_end_win = sfSprite_create();
    game->sprite_fond_noir_win = sfSprite_create();
}