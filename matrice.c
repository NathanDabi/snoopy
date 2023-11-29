// matrice.c
#include <stdio.h>

void initialiserMatrice(char matrice[20][10]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            matrice[i][j] = ' ';
        }
    }
}

void afficherMatrice(char matrice[20][10]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}