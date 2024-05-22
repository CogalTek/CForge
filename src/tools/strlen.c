/*
** EPITECH PROJECT, 2024
** CFORGE
** File description:
** strlen
*/

#include "../../includes/my.h"

// Return 1 if different
unsigned long strlen (const char *A)
{
    int i = 0;

    while (A[i] != 0) i++;

    return i;
}
