#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,N,revolution;
    float diameter,time;
    float distance[1000],average_Speed[1000];
    float Pi=3.1415927;


    i=0;
    do
    {   do
        {
            scanf("%f",&diameter);
        }while(diameter<=0);

        do
        {
            scanf("%d",&revolution);
        }while(revolution<0);

        do

        {
            scanf("%f",&time);
        }while(time<=0);

    diameter/=(5280*12);//convertion du diamètre de inches à miles

      //  printf("%.2f",diameter);
        distance[i]=diameter*revolution*Pi; //calcul de la distance soit D=diameter*Pi*nbre de tours

        time/=3600; //Convertion des secondes entrées en Heure

        average_Speed[i]=(distance[i]/time); //calcul de la distance soit V=distance/temps

        i++;
    }while(revolution!=0);

    N=i;// Nous mettons dans N le nombre total de voyage
    for(i=0;i<N-1;i++)
    {
        printf("\nTrip # %d : %.2f %.2f",i+1,distance[i],average_Speed[i]);
    }
    return 0;
}
