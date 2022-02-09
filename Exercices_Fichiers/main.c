#include <stdio.h>
#include <stdlib.h>
int main()
{

    int nbr,i;
    FILE* etudiant=NULL;
    etudiant=fopen("information_etudiant.txt","w");
    scanf("%d",&nbr);
    char nom[nbr][50],prenoms[nbr][80],filiere[nbr][50];
    if(etudiant!=NULL)
    {
        for(i=0; i<nbr; i++)
        {
            //fgets(" ",sizeof(""),stdin);
            printf("\nEtudiant  n : %d",i+1);
            fgets(nom[i],sizeof(nom[i]),stdin);
            printf("\nNom : ");
            fgets(nom[i],sizeof(nom[i]),stdin);

            printf("\nPrenoms : ");
            fgets(prenoms[i],sizeof(prenoms[i]),stdin);
            printf("\nFiliere : ");
            fgets(filiere[i],sizeof(filiere[i]),stdin);




            fprintf(etudiant,"\nNom de l'Etudiant : %s",nom[i]);
            fprintf(etudiant,"\nSon/Ses Prénoms : %s ",prenoms[i]);
            fprintf(etudiant,"\nSa filiere : %s",filiere[i]);
        }

    }

    return 0;
}
