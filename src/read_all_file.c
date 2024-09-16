/*
** C0GAL PROJECT, 2024
** Projet
** File description:
** read_all_file
*/

#include "../includes/my.h"

// prepare un fichier unique
int read_all_file (ALL *GLOBAL, int index)
{
    FILE *fptr;

    for (int i = 0; GLOBAL->ofile[i]; i++) {
        fptr = fopen(GLOBAL->ofile[i], "rb");

        if (fptr == NULL) {
            perror("Erreur lors de l'ouverture du fichier");
            return 1;
        }

        printf("Ouverture de %s\n", GLOBAL->ofile[i]);

        char myString[32000];

        while(fgets(myString, 32000, fptr))
            printf("%s", myString);

        // assembler tout les fichiers en un seul
        // gerer les dependances

        fclose(fptr);
    }
    return 0;
}
