#include <stdio.h>
#include <stdlib.h>
int main(){
int nbremat,i;
float moyenne,som;
printf(\nEntrer le nombre de matière enseigné : ");
scanf("%d",&nbremat);

float note[nbremat];
i=0;
while(i<nbremat){
printf("\nVeuillez saisir la note de la matière %d :",i+1);
scanf("%f",&note[i]);
som+=note[i];
i++;
}
moyenne=som/nbremat;

printf("\nLes notes entrées sont :");
do{
i=0;
printf("%f\t",note[i]);
i++;
}while(i<nbremat);

printf("\nLa somme des %d notes : %.2f",nbremat,som);
printf("\nLeur moyenne est : %.2f",moyenne);
printf("\n");
return 0;
}