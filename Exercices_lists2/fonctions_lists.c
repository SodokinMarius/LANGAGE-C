#include <stdio.h>
#include <stdlib.h>
#include "Prototypes_lists.h"
void creerliste(Pelement tete){
Pelement tmp=tete;
int val;
printf("\nVeuillez entrer le premier element de la liste : ");
scanf("%d",&val);
tmp->note=val;
tmp->next=NULL;
printf("\nVeuillez entrer l element suivant : ");
scanf("%d",&val);
tmp->next=val;
tmp->next=NULL;
tete=tmp;
}

void Afficher_liste(Pelement tete){
Pelement tmp=tete;
printf("\nLes elements de votre liste : \n");
while(tmp!=NULL){

    printf("%d ",tmp->note);
    tmp=tmp->next;
}

}
void Ajouter_liste(Pelement tete, int n){
    Pelement tmp=tete,tete2;
    tete2=malloc(sizeof(Pelement));
    tmp->next=tete2;
    tete2->note=n;
    tete2->next=NULL;
    tete2=tete;


}


