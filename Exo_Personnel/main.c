#include <stdio.h>
#include <stdlib.h>
typedef struct essai essai;
struct essai
{
int valeur;
    essai* suivant;
};

int main()
{
    int nombre;
essai* premiervalad;
premiervalad=malloc(sizeof(essai*));
scanf("%d",&nombre);
essai->valeur=nombre;
essai->suivant=NULL;
//printf("%d, %d, %d",premiervalad,essai->suivant,essai->valeur);
    return 0;
}
