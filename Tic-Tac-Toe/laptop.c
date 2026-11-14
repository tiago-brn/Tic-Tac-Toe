#include <stdio.h>
#include <stdlib.h>

int laptop_case(char **grille) {
    int i = 0;
    while (i < 3) {
        int x = 0;
        while(x < 3) {
            if (grille[i][x] == ' ') {
                grille[i][x] = 'O';
                return 1;
            }
        x++;
        
        }
        i++;
    }
    return 0;
}