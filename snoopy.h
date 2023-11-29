//
// Created by sacha on 14/11/2023.
//

#ifndef UNTITLED13_SNOOPY_H
#define UNTITLED13_SNOOPY_H

#endif //UNTITLED13_SNOOPY_H

int menu();
int Menu1();




int Menu2();
void im(char matrice[10][20]); //initialisation de la matrice
int dp(char matrice[10][20], int* X, int* Y, char direction); //déplacement de Snoopy
void ibo(char matrice[10][20]); //initialisation des oiseaux
void ib(char matrice[10][20]); //initialisation des blocks cassables
void mb(char matrice[10][20]); //affichage de la matrice avec les blocks
int Te();
void *TimerThread(void *arg);
int game=0;
int end();












