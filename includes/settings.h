/*
** C0GAL PROJECT, 2024
** Projet
** File description:
** settings
*/

#ifndef SETTINGS_H_
#define SETTINGS_H_

    typedef struct FUNCTION_T {
        char *name;
        char *file;
    } FUNCTION;

    typedef struct ALL_T {
        char *name;
        char **ofile;
        char **hfile;
        char **libs;
        FUNCTION *FUNC;
    } ALL;

#endif /* !SETTINGS_H_ */
