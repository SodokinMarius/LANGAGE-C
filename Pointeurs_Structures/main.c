#include <stdio.h>
#include <stdlib.h>
typedef struct cellule cellule;
struct cellule{
    int valeur;
    cellule* suivant;

};

typedef struct cel* Pcel;
typedef struct cel cel;
struct cel{

int valeur;
Pcel suivant;
};
//creer liste
void crerlist(int n,Pcel point){
int ValeurE,i;
Pcel tete,P;
tete=point;
printf("\nEntrer le premier d elements de la liste : ");
scanf("%d",ValeurE);
point->valeur=ValeurE;
tete->suivant=NULL;

for(i=0;i<n;i++){

P=malloc(sizeof(Pcel));
printf("\nEnter l element %d : ",i+1);
scanf("%d",&ValeurE);
P->valeur=ValeurE;
P->suivant=NULL;
tete->suivant=P;
tete=P;
}

       }



int main()
{
   /*cellule* tete=NULL;
   tete=malloc(sizeof(int));
   tete->valeur=5;
   tete->suivant=NULL;
   cellule* deuxieme=malloc(sizeof(cellule*));*/

   Pcel point =malloc(sizeof(Pcel));
   int nbr;
   printf("\nEtntre le nombre d element de votre liste de depart : ");
   scanf("%d",&nbr);
   crerlist(nbr,point);
    return 0;
}
