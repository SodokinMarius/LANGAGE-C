#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,i,j,B,som,nbr1,nbr2,t;

    scanf("%d",&X);
    int T[X];
    for(i=0;i<X;i++){
        scanf("%d",&T[i]);
    }
    scanf("%d",&B);
    for(i=0;i<X;i++){
        som=0;
        for(j=0;j<X-i;j++){
           // som+=T[j];
            t=0;
            while(som !=B && t<X){
                if(som==B && T[i]!=T[i+1]){
                        som=som-T[j];
                    nbr1=j;
            }
            t++;
                }



        }
    }

    /*for(i=X;i>0;i--){
        som=0;
        for(j=X-i;j>0-i;j--){
            som+=T[j];
                if(som==B){
                    nbr2=j;
                }


        }
    }
*/
    if(som!=B)
        printf("%d",-1);


    printf("\n%d est le nombre de fois.(%d)",nbr1+1,som);

    return 0;
}
