/*
** EPITECH PROJECT, 2024
** Projet
** File description:
** add_c_file
*/

#include "../../includes/my.h"
#include <string.h>

void add_c_file (ALL *GLOBAL, const char* str)
{
    size_t len = size(GLOBAL->ofile) + 1;
    GLOBAL->ofile = realloc(GLOBAL->ofile, (sizeof(char *) * len) + 2);
    len = size(GLOBAL->ofile);
    GLOBAL->ofile[len] = malloc((sizeof(char) * strlen(str)) + 1);
    strcpy(GLOBAL->ofile[len], str);
    GLOBAL->ofile[len + 1] = NULL;
}
