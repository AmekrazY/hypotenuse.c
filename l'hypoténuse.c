#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float hypo(float a, float b)        // fonction qui calcule la racine des deux longueurs
{
    float hyp;
    hyp = sqrt(a + b);
    return hyp;
}

int main(void)
{

    float l, lo, hyp, l_r, lo_r ;   // declaration de variables


    printf("Bienvenue sur le calculateur d'hypoténuse, selon le théorème de Pythagore !\n\n");  // message de bienvenu
    printf("Soit ABC un triangle rectangle en B\n");

    do
    {
        printf("Veuillez entrer la longueur de AB en (cm) ? \n");   // on demande la premier longueur
        scanf("%f", &l);
        printf("Incorrect veuillez saisir un nombre superieur à 0 !!!\n");

    }
    while (l <= 0);     // On verifier que la longueur est inferieur à 0 sinon on redemande de nouveau de saisir la longueur
    system("clear");    // Ca permet de supprimer l'ecran precedante une fois valider

    printf("Veuillez entrer la deuxième longueur de BC en (cm) ? \n");  // On demande de saisir la deuxieme longueur
    scanf("%f", &lo);

    hyp = hypo(pow(l, 2), pow(lo, 2));     // appel à la fonction on l'affecton a une variable qu'on affiche ensuite

    // L'affichage de la variable qui est l'hypoténuse
    printf("La longueur de l'hypoténuse selon le Theoreme de Pythagore est de : %.2f cm.", hyp);
}