#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"

#define max 100

int main()
{
    int i,nbr,caract=0,positionCher; long position;
    char Alire[max];

    FILE* fichier=NULL;
    formulaire a[100];

    fichier=fopen("formulaire.html","r+");
    if(fichier!=NULL){

        /*printf("\nVeuillez entrer l effectif : ");
        scanf("%d",&nbr);
        controler(nbr);
        formulaire etudiant[nbr];
        fprintf(fichier,"\nEffectif à enregistrer : %d ",nbr);
        for(i=0;i<nbr;i++){
            printf("\nEtudiant %d : \n",i+1);
            printf("\nNom : "); fgets(etudiant[i].nom,sizeof(etudiant[i].nom),stdin);
            fgets(etudiant[i].nom,sizeof(etudiant[i].nom),stdin);
            printf("\nPrenoms : "); fgets(etudiant[i].prenoms,sizeof(etudiant[i].prenoms),stdin);
            printf("\nNationalite : "); fgets(etudiant[i].nationalite,sizeof(etudiant[i].nationalite),stdin);
            printf("\nDate de Naissance : "); fgets(etudiant[i].date_naissance,sizeof(etudiant[i].date_naissance),stdin);
            //controlerDate(etudiant[i].date_naissance);
            printf("\nLieu de Naissance : "); fgets(etudiant[i].Lieu_Naissance,sizeof(etudiant[i].Lieu_Naissance),stdin);
            printf("\nAge : "); scanf("%d",&etudiant[i].age);
           controler(etudiant[i].age);

           fgets(etudiant[i].sexe,sizeof(etudiant[i].sexe),stdin);
            printf("\nSexe : ") ; fgets(etudiant[i].sexe,sizeof(etudiant[i].sexe),stdin);
            printf("\nSpecilalite : "); fgets(etudiant[i].specialite,sizeof(etudiant[i].specialite),stdin);

            //Ecriture dans le fichier nomme Formulaire.txt
            fprintf(fichier,"\nEtudiant  %d : ",i+1);
            fprintf(fichier,"\nNom : %s",etudiant[i].nom);
            fprintf(fichier,"\nPrenoms : %s",etudiant[i].prenoms);
            fprintf(fichier,"\nNationalité : %s",etudiant[i].nationalite);
            fprintf(fichier,"\nDate de Naissance: %s",etudiant[i].date_naissance);
            fprintf(fichier,"\nLieu de Naissance : %s",etudiant[i].Lieu_Naissance);

            fprintf(fichier,"\nAge : %d",etudiant[i].age);
            fprintf(fichier,"\nSexe : %s",etudiant[i].sexe);
            fprintf(fichier,"\nSpecialié: %s",etudiant[i].specialite);*/

           while(fgets(Alire,max,fichier)!=NULL){
                printf("%s",Alire);
            }

           position= ftell(fichier);
           positionCher=fseek(fichier,-50,SEEK_CUR);
           printf("\nposition : %lf et Position Deplacee: %d ",position,positionCher);
           rewind(fichier);
           rename("formulaire.ppt","formulaire.html");


            /*do{
                caract=fgetc(fichier);
            printf("%c",caract);

            }while(fichier != EOF);*/
        //}

       fclose(fichier);
    }
    printf("\nTaille de la strucure : %d octets",sizeof(formulaire));
    printf("\nTaille de la variable : %d octets",sizeof(Alire));
    printf("\nVariable a : %d",sizeof(a));
    remove("d:\\coding\\essai.doc2");

    return 0;
}
