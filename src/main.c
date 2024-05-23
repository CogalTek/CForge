/*
** EPITECH PROJECT, 2024
** Projet
** File description:
** main
*/

#include "../includes/my.h"

int help (void)
{
    printf("Command List:\n");
    printf("./cforge --help | -h : return the command list.\n");
    return 0;
}

int manage_argument (int argc, char **argv)
{
    ALL *GLOBAL;

    setup_struct(GLOBAL);

    for (int i = 0; argv[i]; i++) {
        if (!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help"))
            return help();
        if (!strcmp(argv[i], "-o") && i < argc)
            set_o(i, argv, GLOBAL);
    }
    printf("%s", GLOBAL->name);
    return 0;
}

int main (int argc, char **argv)
{
    if (argc < 2)
        return help();
    return manage_argument(argc, argv);
}
