#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T,i,j,k,K,N,multi,t,tmp;

   scanf("%d",&T);
   int result[T];
   for(i=0;i<T;i++){
        do{
           scanf("%d",&N);
        }while(N<1 || N>10000);

        do{
           scanf("%d",&K);
        }while(K<1 || K>5);

        int a[N];

       for(j=0;j<N;j++){
        scanf("%d",&a[j]);
       }
       //Tri du tableau

        for(j=N;j>0;j--){

        for(k=N;k>0;k--){
            if(a[k]>a[k-1]){
                tmp=a[k];
                a[k]=a[k-1];
                a[k-1]=tmp;
            }
        }
        }

        multi=1;
       for(j=1;j<=K;j++){
        multi*=a[j];
       }
       result[i]=multi;
}
    printf("\n");

       for(i=0;i<T;i++){
        printf("%d \n",result[i]);
       }

    return 0;
}

