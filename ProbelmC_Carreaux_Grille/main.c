
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int P,i,l;

    do
    {
        scanf("%d",&P);

        if(P<=0)
            printf("\nValeure strictement positive svp:");

        if(P>=1000000)
            printf("Valeure trop grande.");


    }
    while(P<=0 || P>=1000000);


    int  total_number_square[P];

    for(i=0; i<P; i++)
    {

        do
        {
            scanf("%d",&l);
            if(l<=0)
                printf("\nValeure strictement positive :");
            if(l>=1000000)
                printf("Valeure trop grande.");

        }
        while(l<=0 || l>=1000000);


        total_number_square[i]=(l*(l+1)*((2*l)+1))/6;
    }

    //Affichages
    for(i=0; i<P; i++)
    {
        printf("\n%d",total_number_square[i]);
    }
    return 0;
}
