#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

char ** grid();

void interface(char ** grid);

int case_choisie(void);

int write_case(char **grille, int case_jouee);

int laptop_case(char **grille);

int end_match(char **grille);

int victory(char **grille);

#endif