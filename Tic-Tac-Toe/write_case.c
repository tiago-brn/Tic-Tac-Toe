int write_case(char **grille, int case_jouee) {
    if (case_jouee < 0 || case_jouee > 8){
        return 0;
    }

    int ligne = case_jouee / 3;
    int colonne = case_jouee % 3;
    if (grille[ligne][colonne] == ' ') {
        grille[ligne][colonne] = 'X';
        return 1;
    }
    return 0;
}