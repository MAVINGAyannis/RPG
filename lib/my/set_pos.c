/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_pos.c
*/

#include "../../include/rpg.h"

void set_pos(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    ecr_prcpl->pos_logoa = (sfVector2f){870, 400};
    ecr_prcpl->pos_logo = (sfVector2f){560, 50};
    ecr_prcpl->pos_play = (sfVector2f){450, 590};
    ecr_prcpl->pos_play_surbr = (sfVector2f){450, 590};
    ecr_prcpl->pos_quit = (sfVector2f){1200, 600};
    ecr_prcpl->pos_quit_surbr = (sfVector2f){1200, 600};
    ecr_prcpl->pos_map_gauche = (sfVector2f){0, 0};
    ecr_prcpl->pos_map_milieu = (sfVector2f){2400, 0};
    ecr_prcpl->pos_map_droite = (sfVector2f){4800, 0};
    ecr_prcpl->pos_minimapgauche = (sfVector2f){1560};
    ecr_prcpl->pos_minimapmilieu = (sfVector2f){1680};
    ecr_prcpl->pos_minimapdroite = (sfVector2f){1800};
    mvc->pos_link_spawn = (sfVector2f){1900, 600};
    mvc->pos_mvright = (sfVector2f){270, 390};
    set_pos_2(ecr_prcpl, mvc, game);
    set_pos_3(ecr_prcpl, mvc, game);
}

void set_pos_2(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    mvc->pos_mvleft = (sfVector2f){270, 390};
    mvc->pos_mvfont = (sfVector2f){270, 390};
    mvc->pos_mvback = (sfVector2f){270, 390};
    mvc->pos_a_right = (sfVector2f){270, 390};
    mvc->pos_a_left = (sfVector2f){270, 390};
    mvc->pos_a_front = (sfVector2f){270, 390};
    mvc->pos_a_back = (sfVector2f){270, 390};
    mvc->pos_redcircle = (sfVector2f){1570, 17};
    game->pos_alien = (sfVector2f){3800, 1000};
    game->pos_alien_2 = (sfVector2f){2850, 1000};
    game->pos_alien_3 = (sfVector2f){4200, 1100};
    game->pos_alien_4 = (sfVector2f){715, 710};
    game->pos_alien_5 = (sfVector2f){2300, 850};
    game->pos_alien_6 = (sfVector2f){1100, 750};
    game->pos_alien_7 = (sfVector2f){1700, 800};
    game->pos_alien_8 = (sfVector2f){4000, 950};
    game->pos_alien_9 = (sfVector2f){2800, 700};
    game->pos_alien_10 = (sfVector2f){420, 800};
    game->pos_bombattack = (sfVector2f){270, 390};
}

void set_pos_3(prcpl *ecr_prcpl, move_p *mvc, gameplay *game)
{
    ecr_prcpl->pos_map_gauche_cinematique = (sfVector2f){0, 0};
    ecr_prcpl->pos_map_milieu_cinematique = (sfVector2f){1920, 0};
    ecr_prcpl->pos_map_droite_cinematique = (sfVector2f){3840, 0};
    game->pos_zelda = (sfVector2f){3200, 630};
    game->pos_cinem1 = (sfVector2f){600, 850};
    game->pos_cinem2 = (sfVector2f){600, 850};
    game->pos_cinem3 = (sfVector2f){600, 850};
    game->pos_zelda_game = (sfVector2f){4010, 840};
    game->pos_dielink = (sfVector2f){270, 390};
    mvc->pos_link_spawn_2 = (sfVector2f){1900, 0};
    game->pos_fond_go = (sfVector2f){0, -200};
    game->pos_quit_go = (sfVector2f){830, 800};
    game->pos_quit_surbr_go = (sfVector2f){830, 800};
    game->pos_bombattack_2 = (sfVector2f){280, 400};
    game->pos_bombattack_3 = (sfVector2f){280, 400};
    game->pos_bombattack_4 = (sfVector2f){280, 400};
    game->pos_touches = (sfVector2f){700, 920};
    game->pos_end_win = (sfVector2f){370, 0};
}