/*
** EPITECH PROJECT, 2024
** Projet
** File description:
** setup_struct
*/

#include "../includes/my.h"

void setup_struct (ALL *GLOBAL)
{
    GLOBAL->name = malloc((sizeof(char) * strlen("out")) + 1);
    GLOBAL->name = "out";
}
