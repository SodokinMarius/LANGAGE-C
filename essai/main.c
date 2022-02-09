#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*void* object;
typedef struct element* Pelement;
typedef struct Element element;
struct element{
int val;
Pelement suivant;
};
CreerListe(Pelement maliste,int n){
Pelement liste,copie=maliste;
int donne, i;
 printf("\nEnter le premier element de la liste : ");
 scanf("%d",&donne);
 copie->val=donne;
 copie->suivant=NULL;
for(i=1;i<n;i++){
    liste=malloc(sizeof(Pelement));
    printf("\nEnter l element suivant : ");
    scanf("%d",&donne);
    copie->suivant=liste;
    liste->val=donne;
    liste->suivant=NULL;
    copie=liste;

}

}
afficher_liste(Pelement liste){
Pelement copie=liste;
printf("\nLes elements de la liste : \n");
while(copie!=NULL){
    printf("%d\t",copie->val);
    copie=copie->suivant;
}

}

Pelement supprimer_fin(liste){
Pelement coplist=liste,avdernier=liste, dernier=liste;
while(coplist->suivant!=NULL){
    avdernier=coplist;
    dernier=avdernier->suivant;
    coplist=coplist->suivant;
}
avdernier->suivant=NULL;
free(dernier);
return liste;

}
Pelement supprimer_tete(Pelement liste){
Pelement copie=liste;
liste=copie->suivant;
free(copie);
return liste;
}
int Rechercher_element(Pelement liste,int valeurRechercher,int *addRechercher,int *addPreced){
    int trouver=0;
    Pelement copie=liste;
    while(copie!=NULL){
            if(copie->val==valeurRechercher){
             trouver=1;
            *addRechercher=copie;
            *addPreced=copie->suivant;
            }
        copie=copie->suivant;
    }
    return trouver;
}
Pelement supprimer_Element(Pelement liste,int elementSup){
Pelement copie,addsup,preced;
if(copie->val==elementSup){
    addsup=cop;
    copie=addsup->suivant;
    free(addsup);
    return copie;
}
else{
    while(copie!=NULL){
        if(Rechercher_element(liste,elementSup,addsup,preced)){
            preced->suivant=add->suivant;
        }
        copie=copie->suivant;
    }
    free(addsup);
}
return copie;
}


int main()
{
int n,donne,valeurSuppr,valeurRechercher;
Pelement maliste;
int* addRechercher,addpreced;
printf("\nCombien d'elements voulez vous creer ?: ");
scanf("%d",&n);

maliste=malloc(sizeof(Pelement));

CreerListe(maliste,n);
afficher_liste(maliste);
/*printf("\nQuel element voulez vous supprimer ? ");
scanf("%d",&valeurSuppr);*/
/*maliste=supprimer_fin(maliste);
afficher_liste(maliste);
maliste=supprimer_tete(maliste);
afficher_liste(maliste);
printf("\nQuel element voulez vous rechercher ? ");
scanf("%d",&valeurRechercher);
if(Rechercher_element(maliste,valeurRechercher,&addRechercher,&addpreced)==1)
    printf("\nWahoo ! Valeur trouve");
else
    printf("\nDesole ! Valeur non trouver");*/
if(4<3 <8)
    printf"\nBonjour");
else
    printf("\nNon");

    return 0;
}
