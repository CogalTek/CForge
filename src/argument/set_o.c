/*
** C0GAL PROJECT, 2024
** Projet
** File description:
** set name
*/

#include "../../includes/my.h"

void set_o (int iter, char **argv, ALL *GLOBAL)
{
    char *commande_list[] = {"-o", NULL};
    for (int i = 0; commande_list[i] != NULL; i++) {
        if (!strcmp(commande_list[i], argv[iter + 1])) {
            printf("\033[41;37mCForge: Output name error.\033[0m\n");
            exit(-1);
        }
    }
    GLOBAL->name = malloc((sizeof(char) * strlen(argv[iter + 1])) + 1);
    GLOBAL->name = argv[iter + 1];
    printf("\033[48;5;214;30mCForge: Output name set as %s\033[0m\n", argv[iter + 1]);
}
