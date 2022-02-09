#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,i,j,A,B,cmpt;
    do{
        scanf("%d",&T);
    }while(T<1 || T>100000);

    int nbrApar[T];

    for(i=0;i<T;i++){
            do{
                 scanf("%d%d",&A,&B);

            }while(A>B || A<1 || B<1 || A>10000000000000000000 || B>1000000000000000000 );
           cmpt=0;
            for(j=A;j<=B;j++){
               if((j%400==0) || (j%4==0 && j%100!=0)){
                cmpt++;
            }

            }
            nbrApar[i]=cmpt;

    }
    for(i=0;i<T;i++){
        printf("\n%d",nbrApar[i]);
    }
    return 0;
}
