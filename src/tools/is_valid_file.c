/*
** EPITECH PROJECT, 2024
** CFORGE
** File description:
** is_valid_file
*/

#include "../../includes/my.h"

int return_error (const char *str)
{
    printf("\033[41;37mCForge: %s doesn't exist.\033[0m\n", str);
    return -1;
}

int is_valid_file (const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 65 || str[i] > 122) && str[i] != '.' && str[i] != '_' && str[i] != '~' && str[i] != '/')
            return 0;
    if (str[strlen(str) - 2] == '.') {
        if (str[strlen(str) - 1] == 'o')
            return access(str, F_OK) == 0 ? 1 : return_error(str);
        else if (str[strlen(str) - 1] == 'h')
            return access(str, F_OK) == 0 ? 2 : return_error(str);
    }
    return 0;
}
