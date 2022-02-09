#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operation_banque.h"

void Generateur_entiers(int Y)
{

    int i,som=0,moy=0,min=1,max=50,carte_att_peti,attmax[50],ind;
    signed int nbr[50];
//dpkg -i nom
    i=0;
    srand(time(NULL));
    do
    {
        i++;
        nbr[i-1]=(rand()%(max-min+1)+ min);
        som=som+nbr[i-1];

        moy=som/i;


    }
    while(moy!=Y && i<=50);

    printf("\n\n");
    for(i=0; i<50; i++)
    {
        printf("%d\t",nbr[i]);
        attmax[i]=Carte_ID(nbr[i]);

    }
    printf("\nCarte ayant la plus petite altitude :\n");
    for(i=0; i<50; i++)
    {
        carte_att_peti=attmax[0];
        if(attmax[i]<carte_att_peti)
        {
            carte_att_peti=attmax[i];
           ind=i;
        }
    }
    printf("\n\nCarte d'identite ayant l atitude la plus petite : %d",carte_att_peti);
     Carte_ID(attmax[ind]);
}
int Carte_ID(int n)
{
    int i=0,duree_vol,card[100000],tail=0,attmax=0;
    do
    {

        card[i]=n;

        if(card[i]%2==0)
            card[i+1]=n/2;
        else if(card[i]!=0)
            card[i+1]=(n*3)+1;
        n=card[i+1];
        i++;
    }
    while(n>1);

    tail=i+1;
    duree_vol=tail-2;
    /*for(i=0;i<tail;i++){
     printf("%d ",card[i]);
    }*/
    printf("\n\nTrajectoire :\n");

    attmax=card[1];
    for(i=1; i<tail; i++)
    {

        if(card[i]>attmax)
        {
            attmax=card[i];
        }

        //printf("%d ",card[i]);
    }
    printf("\n\n");
    card[tail]=duree_vol;
    card[tail+1]=attmax;
    // printf("\nDurre de vol : %d\t Attitude maximale : %d ",duree_vol,attmax);printf("\n\n");

    //Affichage de la carte d'identité
    for(i=0; i<tail+2; i++)
    {
        printf("%d\t",card[i]);
    }
    return attmax;
}

