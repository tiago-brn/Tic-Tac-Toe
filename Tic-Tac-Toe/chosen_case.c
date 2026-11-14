#include <stdio.h>
#include <stdlib.h>

int case_choisie(void) {
    int case_jouee = -1;
    printf("\nChoisissez où jouer (0 à 8) :\n");

    if (scanf("%d", &case_jouee) != 1) {
        case_jouee = -1;
    }
    while (getchar() != '\n');

    printf("\n");
    return case_jouee;
}