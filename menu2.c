//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "snoopy.h"
#include <unistd.h>
#include "snoopy.h"
#include <time.h>
#include <pthread.h>

// Structure pour stocker les informations du timer
struct TimerInfo {
    unsigned int interval; // Intervalle du timer en secondes
    void (*callback)();    // Pointeur vers la fonction de rappel
};

// Fonction du thread du timer
void *TimerThread(void *arg)
{
    struct TimerInfo *timerInfo = (struct TimerInfo *) arg;

    // Attendre l'expiration du timer
    sleep(timerInfo->interval);

    // Appeler la fonction de rappel
    timerInfo->callback();

    // Terminer le thread
    pthread_exit(NULL);
}

// Fonction pour démarrer le timer
void StartTimer(unsigned int interval, void (*callback)()) {
    // Créer une structure TimerInfo pour stocker les informations du timer
    struct TimerInfo *timerInfo = (struct TimerInfo *) malloc(sizeof(struct TimerInfo));
    timerInfo->interval = interval;
    timerInfo->callback = callback;

    // Créer un thread pour le timer
    pthread_t timerThread;
    pthread_create(&timerThread, NULL, TimerThread, (void *) timerInfo);

    // Détacher le thread pour permettre la terminaison automatique
    pthread_detach(timerThread);
}

// Exemple d'utilisation du timer
void MyCallback()
{
    printf("Le timer a expiré !\n");
}


int end() {
    printf("le temps est écoulé:\n");
}
        int Menu2() {

    int game=0;
/*
 * il faut que lorsque le jeu commence, on fasse passer la variable game sur 1 et qu'on declenche le minuteur, et lorsque la fonction miniteur se termine, elle declenche la fonction end, qui fait repasse game a 0
 * il faudra autoriser les evenements clavier que si game =1 */


    char matrice[10][20];
    int X = 5, Y = 10;
    int vies=3;


    im(matrice); //affichage de la matrice initialisé ( au début)

    ibo(matrice); // affichage des oiseaux au début

    ib(matrice); //affichage des blocks cassable au début

    matrice[X][Y] = 'S'; //initialisation de la position de Snoopy


    char mouvement;

    while (1) { // while(1) pour dire "tant que c'est vrai" (parce que 1 = VRAI et 0 = FAUX)




        mb(matrice);

        printf("\nil vous reste %d vies !\n\n", vies); //tentative d'affichage des vies mais j'ai pas réussi

        printf("deplacement vers (q, z, s, d (ou e pour exit): \n"); //demande du déplacement que tu veux faire (faudra utilisé le code ASCII pour mettre les flèches
        scanf(" %c", &mouvement); //pour entrer le mouvement




        if (mouvement == 'e') { // si tu appuies sur q ça quitte le jeu
            break;

        }

        system("clear"); //pour "clear la page" (éviter que la matrice se re affiche a chaque fois)

        dp(matrice, &X, &Y, mouvement); //affichage de la matrice avec ses modifications
        printf("temps restant: %d\n",Te());



    }

    printf("Fin du programme\n");
    printf("le jeu est fini. \n");

    return 0;
}
