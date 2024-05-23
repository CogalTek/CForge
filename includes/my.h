/*
** EPITECH PROJECT, 2024
** Projet
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include "./settings.h"

    int help (void);
    int strcmp (const char *A, const char *B);
    unsigned long strlen (const char *A);
    void set_o (int iter, char **argv, ALL *GLOBAL);
    void setup_struct (ALL *GLOBAL);

#endif /* !MY_H_ */
