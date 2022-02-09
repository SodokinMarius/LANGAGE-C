#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operation_convertion.h"

int main()
{
    int N,i;
    float qtUsd,qtEur,qtXof,qtXdg,qtNgn;
    char deuxieme_caracter,choixd[3];

    scanf("%d",&N);

    float montantTotal[N];

    devise_affichage choix[N];


/*Récuperation chez tous les clients les quantités de devise dans chacun de leur portefeuille;
 de meme que le choix du devise d' affichage*/
    for(i=0; i<N; i++)
    {
    scanf("%f %f %f %f %f %s",&qtUsd,&qtEur,&qtXof,&qtXdg,&qtNgn,&choix[i].devise);

    /*Recuperation du deuxième caractère de chaque choix effectué
    en faisant appel a la fonction "recuperation_deuxièmeCaractère" */
    deuxieme_caracter=recuperation_deuxiemeCaractere(choix[i].devise);



        //Calcul de montant total selon chaque cas
 switch(deuxieme_caracter){
case 'S':
     montantTotal[i]=Convertion_Dollar(qtUsd,qtEur,qtXof,qtXdg,qtNgn);
     break;
case 'U':
      montantTotal[i]=Convertion_Euro(qtUsd,qtEur,qtXof,qtXdg,qtNgn);
      break;
case 'O':
    montantTotal[i]=Convertion_Francs(qtUsd,qtEur,qtXof,qtXdg,qtNgn);
    break;
case 'D':
    montantTotal[i]=Convertion_Dogecoins(qtUsd,qtEur,qtXof,qtXdg,qtNgn);
    break;
case 'G':
     montantTotal[i]=Convertion_Naira(qtUsd,qtEur,qtXof,qtXdg,qtNgn);
    break;
default:
printf("\nErreur de choix ! Veuillez ressayer.");
 }

}


//La sortie du programme(affihage des montants et le choix)
 for(i=0;i<N;i++){
/* Rcuperation du choix du devise d'affichage effectué prealablement.
mais dans le tableau de chaine de caractère (structure)*/
choixd[0]=choix[i].devise[0];
choixd[1]=choix[i].devise[1];
choixd[2]=choix[i].devise[2];
printf("\nLe client %d : %.2f %s dans le portefeuille. \n",i+1,montantTotal[i],choixd);

    }
return 0;

}
