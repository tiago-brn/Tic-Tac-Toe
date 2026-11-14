#include <stdio.h>
#include <stdlib.h>

int case_choisie(void) {
    int case_jouee;
    printf("\nChoisissez où jouer :\n");
    scanf("%d", &case_jouee);
    printf("\n");
    return case_jouee;
}