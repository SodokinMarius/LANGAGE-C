#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,t,j,P,n,m;
    int occuranceMax=0,e,indice_win=0;
    int resultat_Winner;


     //Recuperation du nombre total de vote
   do
   {
      scanf("%d",&P) ;
   }while(P<1 ||P>1000);

   char nom_Winner[P];
    char centre_Winner[P];


   for(i=0;i<P;i++)
   {
       //Recuperation du nombre de Candidat qui doit être compris entre 1 et 100
       do
       {
           scanf("%d",&n);
       }while(n<1 || n>100);


       //Recuperation du nombre de résultat(compris entre 1 et 1000) par centre de  vote
       do
       {
        scanf("%d",&m);
       }while(m<1 || m>1000);

       char listeCandidat[n][1000];

       //Recuperation de la liste des candidats
       for(j=0;j<n;j++)
       {
           do
           {
            scanf("%s",&listeCandidat[j]);
           }while(strlen(listeCandidat[j])>1000);

       }
  /*Les variables qui vont contenir les noms candidats dans les centres :nomCandidat[m],
    les resultats par candidats R[m] : pour m candidats
    Les m centres de votes C[m]
  */
        char nomCandidat[m][1000];
        int R[m];
        char C[m][1000];


  for(t=0;t<m;t++)
  {
        do
        {
            scanf("%s",&nomCandidat[t]);
            /*if(!strstr(nomCandidat[t],listeCandidat))
            {
                printf("\nCe candidat n existe pas ! ");
            }*/
        }while(strlen(nomCandidat[t])>1000 );

        do
        {
            scanf("%d",&R[t]);
        }while(R[t]<0);

        do
        {
            scanf("%s",&C[t]);
        }while(strlen(C[t])>1000);
  }

  //sommes des résultats au cas où un candidat est deux fois voté dans un centre de vote
 for(t=0;t<m;t++)
 {
     if(strstr(nomCandidat[t],nomCandidat[t+1]))
            R[t]+=R[t+1];
     else if(strstr(nomCandidat[t+1],nomCandidat[t+2]))
            R[t+1]+=R[t+2];
 }

 //int resultat_Winner[m];
//Comparaison des résultats etdeduction du winner
resultat_Winner=R[0];

 for(e=0;e<m;e++)
 {
    if(R[e]>=resultat_Winner)
    {
        resultat_Winner=R[e];

        nom_Winner[i]=nomCandidat[e];
        centre_Winner[i]=C[e];
        occuranceMax++;
         //printf("VOTE %d : THE WINNER IS %s %d",e+1,nom_Winner[i],resultat_Winner);
    }

 }

    }

    for(i=0;i<P;i++)
    {

        if(occuranceMax==1)
        {

            printf("VOTE %d : THE WINNER IS %s %d",i+1,nom_Winner[i],resultat_Winner);
        }
        else
            {
                printf("\nVOTE %d : THERE IS A DILEMMA",i+1);
            }
    }
    return 0;
}
