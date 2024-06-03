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
    int tmp = 0;

    setup_struct(GLOBAL);

    for (int i = 1; argv[i]; i++) {
        if (!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help"))
            return help();
        if (!strcmp(argv[i], "-o") && i < argc) {
            set_o(i, argv, GLOBAL);
            i++;
            continue;
        }
        switch (is_valid_file(argv[i])) {
            case 1 :
                add_c_file(GLOBAL, argv[i]);
                break;
            case 2 :
                add_header_file(GLOBAL, argv[i]);
                break;
            default :
                return -1;
                break;
        }
    }
    // printf("Nb Object : %d, Header : %d\n", size(GLOBAL->ofile), size(GLOBAL->hfile));
    for (int i = 0; GLOBAL->ofile[i]; i++)
        printf("\033[48;5;100;30mObject file %d/%d : %s\n\033[0m", i + 1, size(GLOBAL->ofile), GLOBAL->ofile[i]);
    for (int i = 0; GLOBAL->hfile[i]; i++)
        printf("\033[48;5;100;30mHeader file %d/%d : %s\033[0m\n", i + 1, size(GLOBAL->hfile), GLOBAL->hfile[i]);
    // free(GLOBAL);
    return 0;
}

int main (int argc, char **argv)
{
    if (argc < 2)
        return help();
    return manage_argument(argc, argv);
}
