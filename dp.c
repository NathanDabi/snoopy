//
// Created by sacha on 14/11/2023.
//
#include "snoopy.h"


int dp(char matrice[10][20], int* X, int* Y, char direction)

{ //deplacement de snoopy
    matrice[*X][*Y] = ' ';

if (game==0)
    {
    return 0;
}

    switch (direction) {
        case 'z':
            if (*X > 1) (*X)--;
            break;
        case 's':
            if (*X < 8) (*X)++;
            break;
        case 'q':
            if (*Y > 1) (*Y)--;
            break;
        case 'd':
            if (*Y < 18) (*Y)++;

            break;
    }
    matrice[*X][*Y] = 'S';

}









