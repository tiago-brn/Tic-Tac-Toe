#include <stdio.h>
#include <stdlib.h>


int equal(char **grille) {
    int i = 0;
    while (i < 3) {
        int x = 0;
        while(x < 3) {
            if (grille[i][x] == ' ') {
                return 0;
            }
        x++;
        
        }
        i++;
    }
    return 1;
}


int end_match(char **grille) {
    int result = 0;
    if ((grille[0][0] == grille[0][1]) && (grille[0][1] == grille[0][2]) && (grille[0][1] != ' ')) {
        result = 1;
    }
    else if ((grille[1][0] == grille[1][1]) && (grille[1][1] == grille[1][2]) && (grille[1][1] != ' ')) {
        result = 1;
    }
    else if ((grille[2][0] == grille[2][1]) && (grille[2][1] == grille[2][2]) && (grille[2][1] != ' ')) {
        result = 1;
    }
    else if ((grille[0][0] == grille[1][0]) && (grille[1][0] == grille[2][0]) && (grille[1][0] != ' ')) {
        result = 1;
    }
    else if ((grille[0][1] == grille[1][1]) && (grille[1][1] == grille[2][1]) && (grille[1][1] != ' ')) {
        result = 1;
    }
    else if ((grille[0][2] == grille[1][2]) && (grille[1][2] == grille[2][2]) && (grille[1][2] != ' ')) {
        result = 1;
    }
    else if ((grille[0][0] == grille[1][1]) && (grille[1][1] == grille[2][2]) && (grille[1][1] != ' ')) {
        result = 1;
    }
    else if ((grille[0][2] == grille[1][1]) && (grille[1][1] == grille[2][0]) && (grille[1][1] != ' ')) {
        result = 1;
    }
    else if (equal(grille) == 1){
        result = 1;
    }
    else {
        return 0;
    }
    return result;
}

int victory(char **grille) {
    int vic = 0;
    if ((grille[0][0] == grille[0][1]) && (grille[0][1] == grille[0][2]) && (grille[0][1] == 'X')) {
        vic = 1;
    }
    else if ((grille[1][0] == grille[1][1]) && (grille[1][1] == grille[1][2]) && (grille[1][1] == 'X')) {
        vic = 1;
    }
    else if ((grille[2][0] == grille[2][1]) && (grille[2][1] == grille[2][2]) && (grille[2][1] == 'X')) {
        vic = 1;
    }
    else if ((grille[0][0] == grille[1][0]) && (grille[1][0] == grille[2][0]) && (grille[1][0] == 'X')) {
        vic = 1;
    }
    else if ((grille[0][1] == grille[1][1]) && (grille[1][1] == grille[2][1]) && (grille[1][1] == 'X')) {
        vic = 1;
    }
    else if ((grille[0][2] == grille[1][2]) && (grille[1][2] == grille[2][2]) && (grille[1][2] == 'X')) {
        vic = 1;
    }
    else if ((grille[0][0] == grille[1][1]) && (grille[1][1] == grille[2][2]) && (grille[1][1] == 'X')) {
        vic = 1;
    }
    else if ((grille[0][2] == grille[1][1]) && (grille[1][1] == grille[2][0]) && (grille[1][1] == 'X')) {
        vic = 1;
    }
    return vic;
}

