#include <stdio.h>
typedef struct liste* Pliste;
typedef struct liste liste;
struct liste{
    char valeur;
    Pliste suivant;
};
/*---------------------------------------------*/
int Compter(char mot[]){
int nbr=0,i=0;
while(mot[i]!='\0'){
   nbr++;
   i++;
}
return nbr;
}

/*-------------------------------------------------*/
Pliste CreerListe(Pliste liste,char mot[],int tail){
    int i;
    Pliste addiListe;
    liste->valeur=mot[0];
    liste->suivant=NULL;

    for(i=1;i<tail;i++){
    addiListe=malloc(sizeof(Pliste));

    addiListe->valeur=mot[i];
    addiListe->suivant=NULL;
    liste->suivant=addiListe;

    liste=addiListe;

    }

}

/*-------------------------------------------------*/
void AfficherListe(Pliste liste){
Pliste copie=liste;
while(copie!=NULL){
    printf("%c",copie->valeur);
    copie=copie->suivant;
}
}

/*-------------------------------------------------*/
int RechercherPoint(Pliste liste,int *addEl, int *addpreced,char val){
    Pliste preced=NULL;
    val='.';
    int dec=0;
    while(liste!=NULL && dec==0){
            if(liste->valeur==val){
                dec=1;
                *addEl=liste;
                *addpreced=preced;
            }
        preced=liste;
        liste=liste->suivant;
    }
    return dec;

}

/*-------------------------------------------------*/
Pliste SupprimerPoint(Pliste liste, char valsuppr){
    Pliste addsuppr,preced=NULL;

    if(liste->valeur==valsuppr){
        addsuppr=liste;
        liste=liste->suivant;
        free(addsuppr);
        return liste;
        }
        else{
            while(liste->suivant!=NULL){
                /*if(RechercherPoint(liste,&addsuppr,&preced,'*')){*/
                if(liste->valeur=='*'){
                    addsuppr=liste;
                    liste=liste->suivant;
                    free(addsuppr);


                }
                preced=liste;
                liste=liste->suivant;
            }
            return liste;
        }
}

/*-------------------------------------------------*/
Pliste SupprimerToutPoint(Pliste liste){
while(liste!=NULL){
   liste=SupprimerPoint(liste,'.');
    liste=liste->suivant;

}
return liste;
}

/*-------------------------------------------------*/
Pliste SupprimerEtoileS(Pliste liste){
    Pliste addsuppr,preced;
    if(liste->valeur=='*'){
        while(liste->suivant->valeur!='*'){
        liste=SupprimerPoint(liste,liste->suivant->valeur);
            liste=liste->suivant;
          }
    }
    return liste;
}
/*-------------------------------------------------*/


int main()
{
    char mot[10000];

    int i,j,nbrmot,cpt=0;
    Pliste listemot;
    listemot=malloc(sizeof(Pliste));
    scanf("%[^\n]%*c",mot);

    nbrmot=Compter(mot);
    printf("%d",nbrmot);
    char newmot[200];

    /*--------------------------------*/
    listemot=CreerListe(listemot,mot,nbrmot);
    AfficherListe(listemot);
    /*listemot=SupprimerToutPoint(listemot);
    AfficherListe(listemot);
   listemot=SupprimerEtoileS(listemot);
    AfficherListe(listemot);*/
/*---------------------------------*/
/*for(i=0;i<nbrmot;i++){
            if(mot[i]!='.'){
                newmot[i]=mot[i];
            }


          printf("%c",newmot[i]);

    }*/


    return 0;
}
