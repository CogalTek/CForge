/*
** C0GAL PROJECT, 2024
** Projet
** File description:
** add_header_file
*/

#include "../../includes/my.h"
#include <string.h>

void add_header_file (ALL *GLOBAL, const char* str)
{
    size_t len = size(GLOBAL->hfile) + 1;
    GLOBAL->hfile = realloc(GLOBAL->hfile, (sizeof(char *) * len) + 2);
    len = size(GLOBAL->hfile);
    GLOBAL->hfile[len] = malloc((sizeof(char) * strlen(str)) + 1);
    strcpy(GLOBAL->hfile[len], str);
    GLOBAL->hfile[len + 1] = NULL; // ici
}
