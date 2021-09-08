/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** create_from_file.c
*/

#include "../../include/rpg.h"

void create_from_file(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    ecr_prcpl->texture_fontprcpl = sfTexture_createFromFile("src/font_prcpl.jpg", NULL);
    ecr_prcpl->texture_logoa = sfTexture_createFromFile("src/logoa.png", NULL);
    ecr_prcpl->texture_logo = sfTexture_createFromFile("src/logo_zelda.png", NULL);
    ecr_prcpl->texture_play = sfTexture_createFromFile("src/play_prcpl.png", NULL);
    ecr_prcpl->texture_quit = sfTexture_createFromFile("src/quit.png", NULL);
    ecr_prcpl->texture_play_surbr = sfTexture_createFromFile("src/play_surbrillance.png", NULL);
    ecr_prcpl->texture_quit_surbr = sfTexture_createFromFile("src/quit_surbrillance.png", NULL);
    ecr_prcpl->texture_cursor = sfTexture_createFromFile("src/bombe.png", NULL);
    ecr_prcpl->texture_map_gauche = sfTexture_createFromFile("src/gauche.png", NULL);
    ecr_prcpl->texture_map_milieu = sfTexture_createFromFile("src/milieu.png", NULL);
    ecr_prcpl->texture_map_droite = sfTexture_createFromFile("src/droite.png", NULL);
    ecr_prcpl->texture_cursor_game = sfTexture_createFromFile("src/épée.png", NULL);
    ecr_prcpl->texture_minipap_gauche = sfTexture_createFromFile("src/minimap-gauche.png", NULL);
    ecr_prcpl->texture_minipap_milieu = sfTexture_createFromFile("src/minimap-milieu.png", NULL);
    ecr_prcpl->texture_minipap_droite = sfTexture_createFromFile("src/minimap-droite.png", NULL);
    mvc->texture_mvright = sfTexture_createFromFile("src/move_droite.png", NULL);
    mvc->texture_mvleft = sfTexture_createFromFile("src/move_gauche.png", NULL);
    mvc->texture_mvfont = sfTexture_createFromFile("src/move_front.png", NULL);
    create_from_file_2(mvc, game, ecr_prcpl);
}

void create_from_file_2(move_p *mvc, gameplay *game, prcpl *ecr_prcpl)
{
    mvc->texture_mvback = sfTexture_createFromFile("src/move_back.png", NULL);
    mvc->texture_linkspawn = sfTexture_createFromFile("src/link_spawn.png", NULL);
    mvc->texture_redcircle = sfTexture_createFromFile("src/red_circle.png", NULL);
    mvc->texture_linkspawn = sfTexture_createFromFile("src/link_spawn.png", NULL);
    mvc->texture_redcircle = sfTexture_createFromFile("src/red_circle.png", NULL);
    mvc->texture_atck_right = sfTexture_createFromFile("src/attack_right.png", NULL);
    mvc->texture_atck_left = sfTexture_createFromFile("src/attack_left.png", NULL);
    mvc->texture_atck_front = sfTexture_createFromFile("src/attack_front.png", NULL);
    mvc->texture_atck_back = sfTexture_createFromFile("src/attack_back.png", NULL);
    game->texture_alien = sfTexture_createFromFile("src/alien.png", NULL);
    game->texture_bombatack = sfTexture_createFromFile("src/bombe_link.png", NULL);
    ecr_prcpl->texture_map_gauche_cinematique = sfTexture_createFromFile("src/gauche_cinématique.png", NULL);
    ecr_prcpl->texture_map_milieu_cinematique = sfTexture_createFromFile("src/milieu_cinématique.png", NULL);
    ecr_prcpl->texture_map_droite_cinematique = sfTexture_createFromFile("src/droite_cinématique.png", NULL);
    game->texture_cinem1 = sfTexture_createFromFile("src/cinematique_1.png", NULL);
    game->texture_cinem2 = sfTexture_createFromFile("src/cinematique_2.png", NULL);
    game->texture_cinem3 = sfTexture_createFromFile("src/cinematique_3.png", NULL);
    game->texture_zelda = sfTexture_createFromFile("src/zelda.png", NULL);
    game->texture_touches = sfTexture_createFromFile("src/touches.png", NULL);
    game->texture_fond_go = sfTexture_createFromFile("src/game_over.png", NULL);
    mvc->texture_fond_noir = sfTexture_createFromFile("src/fond_noir_game_over.png", NULL);
    game->texture_dielink = sfTexture_createFromFile("src/die_link.png", NULL);
    game->texture_end_win = sfTexture_createFromFile("src/end_win.png", NULL);
}