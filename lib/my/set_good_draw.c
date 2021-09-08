/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_good_draw.c
*/

#include "../../include/rpg.h"

void set_draw_zelda(display *window, move_p *mvc)
{
    if (window->right == 1) {
            sfRenderWindow_drawSprite(window->window, mvc->sprite_mvright, NULL);
            window->right = 1;
            window->left = 0;
            window->front = 0;
            window->back = 0;
        }
        if (window->left == 1) {
            sfRenderWindow_drawSprite(window->window, mvc->sprite_mvleft, NULL);
            window->right = 0;
            window->left = 1;
            window->front = 0;
            window->back = 0;
        }
        if (window->front == 1) {
            sfRenderWindow_drawSprite(window->window, mvc->sprite_mvfont, NULL);
            window->right = 0;
            window->left = 0;
            window->front = 1;
            window->back = 0;
        }
        if (window->back == 1) {
            sfRenderWindow_drawSprite(window->window, mvc->sprite_mvback, NULL);
            window->right = 0;
            window->left = 0;
            window->front = 0;
            window->back = 1;
        }
    }

    void set_attack(display *window, move_p *mvc)
    {
        if (window->i == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyE) && window->right == 1) {
            window->attack_r = 1;
            window->attack_l = 0;
            window->attack_fr = 0;
            window->attack_b = 0;
            window->right = 1;
            window->left = 0;
            window->front = 0;
            window->back = 0;

        }
        if (sfKeyboard_isKeyPressed(sfKeyE) && window->left == 1) {
            window->attack_l = 1;
            window->attack_r = 0;
            window->attack_fr = 0;
            window->attack_b = 0;
            window->right = 0;
            window->left = 1;
            window->front = 0;
            window->back = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyE) && window->front == 1) {
            window->attack_fr = 1;
            window->attack_r = 0;
            window->attack_l = 0;
            window->attack_b = 0;
            window->right = 0;
            window->left = 0;
            window->front = 1;
            window->back = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyE) && window->back == 1) {
            window->attack_b = 1;
            window->attack_r = 0;
            window->attack_l = 0;
            window->attack_fr = 0;
            window->right = 0;
            window->left = 0;
            window->front = 0;
            window->back = 1;
        }
    }
}

void set_draw_attack(display *window, move_p *mvc)
{
    if (window->attack_r == 1 && window->right == 1) {
        sfRenderWindow_drawSprite(window->window, mvc->sprite_atck_right, NULL);
        animation_attack_right(mvc, window);
        window->right = 1;
        window->left = 0;
        window->front = 0;
        window->back = 0;
    }
    if (window->attack_l == 1 && window->left == 1) {
        sfRenderWindow_drawSprite(window->window, mvc->sprite_atck_left, NULL);
        animation_attack_left(mvc, window);
        window->right = 0;
        window->left = 1;
        window->front = 0;
        window->back = 0;
    }
    if (window->attack_fr == 1 && window->front == 1) {
        sfRenderWindow_drawSprite(window->window, mvc->sprite_atck_front, NULL);
        animation_attack_front(mvc, window);
        window->right = 0;
        window->left = 0;
        window->front = 1;
        window->back = 0;
    }
    if (window->attack_b == 1 && window->back == 1) {
        sfRenderWindow_drawSprite(window->window, mvc->sprite_atck_back, NULL);
        animation_attack_back(mvc, window);
        window->right = 0;
        window->left = 0;
        window->front = 0;
        window->back = 1;
    }
}