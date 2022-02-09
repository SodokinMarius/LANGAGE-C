#include <stdio.h>
#include <stdlib.h>
void Remplir(int t,float tab[t][t]){
int i,j,u=t;
for(i=0;i<t;i++){
    for(j=0;j<u;j++){
        printf("\nEntee %d %d : ",(i+1,j+1));
        scanf("%f",tab[i][j]);
    }

}
}
void controler(int n){
do{
      if(n<=0){
        printf("\nEntrer un valeur correcte : ");
        scanf("%d",n);
      }

}while(n<=0);
}

int main()
{
    int taille,nbrAdmis=0,i=0;
    int* AgesAmis=NULL;


    printf("Entrez la taille :");
   // scanf("%d",&taille);
    float note[taille][taille];
    //Remplir(taille,note);
    printf("\nEntier : %d",sizeof(int));
    printf("\nReel : %d",sizeof(float));
    printf("\nRelle double : %d",sizeof(double));

    printf("\nCaracere : %d",sizeof(char));
    printf("\nsigned Ent : %d",sizeof(signed int));
    printf("\nLonq : %d",sizeof(long));

    int* alloc=NULL;
    alloc=malloc(sizeof(int));
    if(alloc==0){
        exit(0);
    }

    printf("\nEntrer votre age : ");
    //scanf("%d",alloc);
    printf("\nVotre age est : %d ans ",*alloc);
free(alloc);*/

//apllication malloc avec Tableau
printf("\Combien d'amis avez vous :");
scanf("%d",&nbrAdmis);
controler(nbrAdmis);
AgesAmis=malloc(nbrAdmis*sizeof(int));
if(AgesAmis==NULL){
    exit(0);
}
for(i=0;i<nbrAdmis;i++){
    printf("\nAge de l ami %d svp :",i+1);
    scanf("%d",&AgesAmis[i]);
    controler(AgesAmis);
}
for(i=0;i<nbrAdmis;i++){
    printf("\nAmis %d : %d ans ",i+1,AgesAmis[i]);
}
free(AgesAmis);


    return 0;
}
