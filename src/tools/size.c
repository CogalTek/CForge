/*
** C0GAL PROJECT, 2024
** CFORGE
** File description:
** size
*/

#include "../../includes/my.h"

// Return 1 if different
int size (char **ar)
{
    int i = 0;

    for (; ar[i]; i++);

    return i;
}
