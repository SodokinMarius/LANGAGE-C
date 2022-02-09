#include <stdio.h>
#include <stdlib.h>
void controler(int n){
    do{
            if(n<=0){
    printf("\nEnter une valeur strictement positive svp :");
    scanf("%d",&n);
            }
    }while (n<=0);

}
void controlerDate(char date[15]){
do{
        printf("\nErreur,date Invalide ! Retapez : ");
            fgets(date,sizeof(date),stdin);

}while(((date[0]<=0)&&(date[1]<=0))||((date[3]<=0)&&(date[4]<=0)) ||((date[6]<=0) &&(date[7]<=0) &&(date[8]<=0) &&(date[9]<=0))) ;
}

