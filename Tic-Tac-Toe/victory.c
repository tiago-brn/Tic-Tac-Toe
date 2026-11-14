#include <stdio.h>
#include <stdlib.h>

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
    else if ()
    else {
        result = 0;
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

int equal(char **grille) {
    int null = 0;
    if 
}
