//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ibo(char matrice[10][20]) {

//  LES OISEAUX
    matrice[8][1] = 'B';
    matrice[1][18] = 'B';
    matrice[1][1] = 'B';
    matrice[8][18] = 'B';

}


void ib(char matrice[10][20]) {   //les blocks cassables
    srand(time(NULL));
    int numberBloc=21; // Chose the value of the bloc
    while (numberBloc>0)
    {
        int x=rand() %10;
        int y=rand() %20;
        if (matrice[x][y]==' ')
        {
            matrice[x][y]='X';
            numberBloc-=1;
        }
    }
}