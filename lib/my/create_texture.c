/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** create_texture.c
*/

#include "../../include/rpg.h"

void create_texture(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    sfSprite_setTexture(mvc->sprite_linkspawn, mvc->texture_linkspawn, sfTrue);
    sfSprite_setTexture(mvc->sprite_redcircle, mvc->texture_redcircle, sfTrue);
    sfSprite_setTexture(mvc->sprite_atck_right, mvc->texture_atck_right, sfTrue);
    sfSprite_setTexture(mvc->sprite_atck_left, mvc->texture_atck_left, sfTrue);
    sfSprite_setTexture(mvc->sprite_atck_front, mvc->texture_atck_front, sfTrue);
    sfSprite_setTexture(mvc->sprite_atck_back, mvc->texture_atck_back, sfTrue);
    sfSprite_setTexture(game->sprite_alien, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_2, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_3, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_4, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_5, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_6, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_7, game->texture_alien, sfTrue);
    create_texture_2(ecr_prcpl, mvc, game);
    create_texture_3(game, ecr_prcpl, mvc);
}

void create_texture_2(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    sfSprite_setTexture(ecr_prcpl->sprite_font_prcpl, ecr_prcpl->texture_fontprcpl, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_logoa, ecr_prcpl->texture_logoa, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_logo, ecr_prcpl->texture_logo, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_play, ecr_prcpl->texture_play, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_quit, ecr_prcpl->texture_quit, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_play_surbr, ecr_prcpl->texture_play_surbr, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_quit_surbr, ecr_prcpl->texture_quit_surbr, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_cursor, ecr_prcpl->texture_cursor, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_map_gauche, ecr_prcpl->texture_map_gauche, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_map_milieu, ecr_prcpl->texture_map_milieu, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_map_droite, ecr_prcpl->texture_map_droite, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_cursor_game, ecr_prcpl->texture_cursor_game, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_minimap_gauche, ecr_prcpl->texture_minipap_gauche, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_minimap_milieu, ecr_prcpl->texture_minipap_milieu, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_minimap_droite, ecr_prcpl->texture_minipap_droite, sfTrue);
    sfSprite_setTexture(mvc->sprite_mvright, mvc->texture_mvright, sfTrue);
    sfSprite_setTexture(mvc->sprite_mvleft, mvc->texture_mvleft, sfTrue);
    sfSprite_setTexture(mvc->sprite_mvfont, mvc->texture_mvfont, sfTrue);
    sfSprite_setTexture(mvc->sprite_mvback, mvc->texture_mvback, sfTrue);
}

void create_texture_3(gameplay *game, prcpl *ecr_prcpl, move_p *mvc)
{
    sfSprite_setTexture(game->sprite_alien_8, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_9, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_alien_10, game->texture_alien, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_map_gauche_cinematique, ecr_prcpl->texture_map_gauche_cinematique, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_map_milieu_cinematique, ecr_prcpl->texture_map_milieu_cinematique, sfTrue);
    sfSprite_setTexture(ecr_prcpl->sprite_map_droite_cinematique, ecr_prcpl->texture_map_droite_cinematique, sfTrue);
    sfSprite_setTexture(game->sprite_cinem1, game->texture_cinem1, sfTrue);
    sfSprite_setTexture(game->sprite_cinem2, game->texture_cinem2, sfTrue);
    sfSprite_setTexture(game->sprite_cinem3, game->texture_cinem3, sfTrue);
    sfSprite_setTexture(game->sprite_zelda, game->texture_zelda, sfTrue);
    sfSprite_setTexture(game->sprite_zelda_game, game->texture_zelda, sfTrue);
    sfSprite_setTexture(game->sprite_touches, game->texture_touches, sfTrue);
    sfSprite_setTexture(game->sprite_fond_go, game->texture_fond_go, sfTrue);
    sfSprite_setTexture(mvc->sprite_fond_noir, mvc->texture_fond_noir, sfTrue);
    sfSprite_setTexture(mvc->sprite_linkspawn_2, mvc->texture_linkspawn, sfTrue);
    sfSprite_setTexture(game->sprite_dielink, game->texture_dielink, sfTrue);
    sfSprite_setTexture(game->sprite_quit_go, ecr_prcpl->texture_quit, sfTrue);
    sfSprite_setTexture(game->sprite_quit_surbr_go, ecr_prcpl->texture_quit_surbr, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_2, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_3, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_4, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_5, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_6, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_7, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_bombattack_8, game->texture_bombatack, sfTrue);
    sfSprite_setTexture(game->sprite_fond_noir_win, game->texture_fond_go, sfTrue);
    sfSprite_setTexture(game->sprite_end_win, game->texture_end_win, sfTrue);
}