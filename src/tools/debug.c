/*
** C0GAL PROJECT, 2024
** CFORGE
** File description:
** debug
*/

#include "../../includes/my.h"

void display_input_file (ALL *GLOBAL)
{
    for (int i = 0; GLOBAL->ofile[i]; i++)
        printf("\033[48;5;100;30mObject file %d/%d : %s\n\033[0m", i + 1, size(GLOBAL->ofile), GLOBAL->ofile[i]);
    for (int i = 0; GLOBAL->hfile[i]; i++)
        printf("\033[48;5;100;30mHeader file %d/%d : %s\033[0m\n", i + 1, size(GLOBAL->hfile), GLOBAL->hfile[i]);

}
