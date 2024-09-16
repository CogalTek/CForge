/*
** C0GAL PROJECT, 2024
** CFORGE
** File description:
** strcmp
*/

#include "../../includes/my.h"

// Return 1 if different
int strcmp (const char *A, const char *B)
{
    if (strlen(A) != strlen(B))
        return 1;
    for (int i = 0; i <= strlen(A); i++)
        if (A[i] != B[i])
            return 1;
    return 0;
}
