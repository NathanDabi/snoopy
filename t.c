//
// Created by sacha on 14/11/2023.
//
#include <stdio.h>
#include <unistd.h>
#include <time.h>

/*int Te()
{
    int t;// tentative du chrono
    time_t debut = time(NULL);
    time_t maintenant;
    int duree = 120;  // 120 secondes

    while (1) {
        maintenant = time(NULL);
        t = duree - (maintenant - debut);
        printf("%d",t);
        if (t <= 0) {
            printf("\nLe temps est écoulé!\n");
            break;
        }
    }
}*/

int Te() {

    int Temps = 120;

    while (Temps > 0) {
        printf("           Temps = %d", Temps);
        fflush(stdout);
        sleep(1);

        printf("\r");
        for (int i = 0; i < 10; i++) {
            printf(" ");
        }
        printf("\r");
        Temps--;
    }

    printf("Temps = 0\n");
}