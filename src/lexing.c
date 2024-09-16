/*
** C0GAL PROJECT, 2024
** Projet
** File description:
** lexing
*/

#include "../includes/my.h"
#include <string.h>

int Lexing (ALL *GLOBAL, int index)
{
    for (int i = 0; GLOBAL->ofile[i]; i++)
        printf("%d: %s (ofile)\n", i, GLOBAL->ofile[i]);
    for (int i = 0; GLOBAL->hfile[i]; i++)
        printf("%d: %s (hfile)\n", i, GLOBAL->hfile[i]);

    return read_all_file(GLOBAL, index);
}
