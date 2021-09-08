/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** sprite_pos.c
*/

#include "../../include/rpg.h"

void sprite_pos(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    sfSprite_setPosition(ecr_prcpl->sprite_font_prcpl, ecr_prcpl->pos_font_prcpl);
    sfSprite_setPosition(ecr_prcpl->sprite_logoa, ecr_prcpl->pos_logoa);
    sfSprite_setPosition(ecr_prcpl->sprite_logo, ecr_prcpl->pos_logo);
    sfSprite_setPosition(ecr_prcpl->sprite_play, ecr_prcpl->pos_play);
    sfSprite_setPosition(ecr_prcpl->sprite_quit, ecr_prcpl->pos_quit);
    sfSprite_setPosition(ecr_prcpl->sprite_play_surbr, ecr_prcpl->pos_play_surbr);
    sfSprite_setPosition(ecr_prcpl->sprite_quit_surbr, ecr_prcpl->pos_quit_surbr);
    sfSprite_setPosition(ecr_prcpl->sprite_cursor, ecr_prcpl->pos_cursor);
    sfSprite_setPosition(ecr_prcpl->sprite_map_gauche, ecr_prcpl->pos_map_gauche);
    sfSprite_setPosition(ecr_prcpl->sprite_map_milieu, ecr_prcpl->pos_map_milieu);
    sfSprite_setPosition(ecr_prcpl->sprite_map_droite, ecr_prcpl->pos_map_droite);
    sfSprite_setPosition(ecr_prcpl->sprite_cursor_game, ecr_prcpl->pos_cursor_game);
    sfSprite_setPosition(ecr_prcpl->sprite_minimap_gauche, ecr_prcpl->pos_minimapgauche);
    sfSprite_setPosition(ecr_prcpl->sprite_minimap_milieu, ecr_prcpl->pos_minimapmilieu);
    sfSprite_setPosition(ecr_prcpl->sprite_minimap_droite, ecr_prcpl->pos_minimapdroite);
    sprite_pos_2(mvc, game);
    sprite_pos_3(mvc, game, ecr_prcpl);
}

void sprite_pos_2(move_p *mvc, gameplay *game)
{
    sfSprite_setPosition(game->sprite_alien, game->pos_alien);
    sfSprite_setPosition(game->sprite_alien_2, game->pos_alien_2);
    sfSprite_setPosition(game->sprite_alien_3, game->pos_alien_3);
    sfSprite_setPosition(game->sprite_alien_4, game->pos_alien_4);
    sfSprite_setPosition(game->sprite_alien_5, game->pos_alien_5);
    sfSprite_setPosition(game->sprite_alien_6, game->pos_alien_6);
    sfSprite_setPosition(game->sprite_alien_7, game->pos_alien_7);
    sfSprite_setPosition(game->sprite_alien_8, game->pos_alien_8);
    sfSprite_setPosition(game->sprite_alien_9, game->pos_alien_9);
    sfSprite_setPosition(game->sprite_alien_10, game->pos_alien_10);
    sfSprite_setPosition(game->sprite_bombattack, game->pos_bombattack);
    sfSprite_setPosition(mvc->sprite_mvleft, mvc->pos_mvleft);
    sfSprite_setPosition(mvc->sprite_mvfont, mvc->pos_mvfont);
    sfSprite_setPosition(mvc->sprite_mvback, mvc->pos_mvback);
    sfSprite_setPosition(mvc->sprite_linkspawn, mvc->pos_link_spawn);
    sfSprite_setPosition(mvc->sprite_redcircle, mvc->pos_redcircle);
    sfSprite_setPosition(mvc->sprite_atck_right, mvc->pos_a_right);
    sfSprite_setPosition(mvc->sprite_atck_front, mvc->pos_a_front);
    sfSprite_setPosition(mvc->sprite_atck_back, mvc->pos_a_back);
}

void sprite_pos_3(move_p *mvc, gameplay *game, prcpl *ecr_prcpl)
{
    sfSprite_setPosition(mvc->sprite_atck_right, mvc->pos_a_right);
    sfSprite_setPosition(mvc->sprite_atck_left, mvc->pos_a_left);
    sfSprite_setPosition(mvc->sprite_atck_front, mvc->pos_a_front);
    sfSprite_setPosition(mvc->sprite_atck_back, mvc->pos_a_back);
    sfSprite_setPosition(mvc->sprite_mvright, mvc->pos_mvright);
    sfSprite_setPosition(mvc->sprite_mvleft, mvc->pos_mvleft);
    sfSprite_setPosition(mvc->sprite_mvfont, mvc->pos_mvfont);
    sfSprite_setPosition(mvc->sprite_mvback, mvc->pos_mvback);
    sfSprite_setPosition(mvc->sprite_linkspawn, mvc->pos_link_spawn);
    sfSprite_setPosition(mvc->sprite_redcircle, mvc->pos_redcircle);
    sfSprite_setPosition(mvc->sprite_atck_right, mvc->pos_a_right);
    sfSprite_setPosition(mvc->sprite_atck_right, mvc->pos_a_right);
    sfSprite_setPosition(mvc->sprite_atck_left, mvc->pos_a_left);
    sfSprite_setPosition(ecr_prcpl->sprite_map_gauche_cinematique, ecr_prcpl->pos_map_gauche_cinematique);
    sfSprite_setPosition(ecr_prcpl->sprite_map_milieu_cinematique, ecr_prcpl->pos_map_milieu_cinematique);
    sfSprite_setPosition(ecr_prcpl->sprite_map_droite_cinematique, ecr_prcpl->pos_map_droite_cinematique);
    sfSprite_setPosition(game->sprite_cinem1, game->pos_cinem1);
    sfSprite_setPosition(game->sprite_cinem2, game->pos_cinem2);
    sfSprite_setPosition(game->sprite_cinem3, game->pos_cinem3);
    sfSprite_setPosition(game->sprite_zelda, game->pos_zelda);
    sfSprite_setPosition(game->sprite_zelda_game, game->pos_zelda_game);
    sfSprite_setPosition(game->sprite_fond_go, game->pos_fond_go);
    sfSprite_setPosition(game->sprite_dielink, game->pos_dielink);
    sfSprite_setPosition(mvc->sprite_linkspawn_2, mvc->pos_link_spawn_2);
    sfSprite_setPosition(game->sprite_quit_go, game->pos_quit_go);
    sfSprite_setPosition(game->sprite_quit_surbr_go, game->pos_quit_surbr_go);
    sfSprite_setPosition(game->sprite_bombattack_2, game->pos_bombattack_2);
    sfSprite_setPosition(game->sprite_bombattack_3, game->pos_bombattack_3);
    sfSprite_setPosition(game->sprite_bombattack_4, game->pos_bombattack_4);
    sfSprite_setPosition(game->sprite_bombattack_5, game->pos_bombattack_5);
    sfSprite_setPosition(game->sprite_bombattack_6, game->pos_bombattack_6);
    sfSprite_setPosition(game->sprite_bombattack_7, game->pos_bombattack_7);
    sfSprite_setPosition(game->sprite_bombattack_8, game->pos_bombattack_8);
    sfSprite_setPosition(game->sprite_touches, game->pos_touches);
    sfSprite_setPosition(game->sprite_end_win, game->pos_end_win);
    sfSprite_setPosition(game->sprite_fond_noir_win, game->pos_fond_noir_win);
}