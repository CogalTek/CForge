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

    int strcmp (const char *A, const char *B);
    unsigned long strlen (const char *A);
    void set_o (int iter, char **argv, ALL *GLOBAL);
    void setup_struct (ALL *GLOBAL);
    int is_valid_file (const char *str);
    int size (char **ar);
    void add_header_file (ALL *GLOBAL, const char* str);
    void add_c_file (ALL *GLOBAL, const char* str);
    int Lexing (ALL *GLOBAL, int index);
    void display_input_file (ALL *GLOBAL);

#endif /* !MY_H_ */
