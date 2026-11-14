#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "tic-tac-toe.h"

int main() {
    char ** grille = grid(); 
    int result = end_match(grille);
    interface(grille);
    
    while(result == 0) {
        int ecrire_joueur = 0;
        while (ecrire_joueur == 0) {
            int case_jouee = case_choisie();
            ecrire_joueur = write_case(grille, case_jouee);
            if (ecrire_joueur == 0) {
                printf("Case invalide ou déjà prise, recommencez.\n");
            }
}
        sleep(2);
        interface(grille);
        result = end_match(grille);
        if (result == 1) {
            if (victory(grille) == 1) {
                printf("\nC'est gagné !\n");
                break;
            }
            else if (equal(grille) == 1) {
                printf("\nMatch nul !\n");
                break;
            }
            else {
                printf("\nC'est perdu !\n");
                break;
            }
        }
        sleep(2);
        system("clear");
        int ecrire_ordi = laptop_case(grille);
        interface(grille);
        result = end_match(grille);
        if (result == 1) {
            if (victory(grille) == 1) {
                printf("C'est gagné !\n");
                break;
            }
            else if (equal(grille) == 1) {
                printf("\nMatch nul !\n");
                break;
            }
            else {
                printf("C'est perdu !\n");
                break;
            }
        }
    }
        int i = 0;
        while(grille[i] != NULL) {
            free(grille[i]);
            i++;
        }
        free(grille);
    exit(0);
}