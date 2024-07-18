/*
** EPITECH PROJECT, 2024
** Projet
** File description:
** main
*/

#include "../includes/my.h"
#include <string.h>

static int verif(ALL *GLOBAL)
{
    for (int i = 0; GLOBAL->ofile[i]; i++) {
        char *tmp = strdup(GLOBAL->ofile[i]);
        if (!tmp) {
            fprintf(stderr, "Memory allocation error\n");
            return -1;
        }
        char *token = strtok(tmp, "/");
        while (token) {
            if (!strcmp(token, "main.o"))
                break;
            token = strtok(NULL, "/");
        }
        if (token && !strcmp(token, "main.o")) {
            free(tmp);
            return Lexing(GLOBAL, i);
        }
        free(tmp);
    }

    printf("\033[41;37mCForge: missing main.o.\033[0m\n");
    return -1;
}

static int help (void)
{
    printf("Command List:\n");
    printf("./cforge --help | -h : return the command list.\n");
    return 0;
}

static int manage_argument (int argc, char **argv)
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
    return verif(GLOBAL);
}

int main (int argc, char **argv)
{
    if (argc < 2)
        return help();
    return manage_argument(argc, argv);
}
