
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operation.h"

int main()
{
	int i,j,N,pperf=0,mperf=0,prisq=0,mrisq=0;
	double min,max,valeurmin,valeurmax;
	scanf("%d",&N);
	calcul(N);
	char nom[N][50];
	double perf[N], risq[N];
	for(i=0;i<N;i++)
	{
	    scanf("%s%lf%lf",&nom[i],&min,&max);
		valeurmin=pow(1+min/100,10);
		valeurmax=pow(1+max/100,10);
		printf("\nDans 10ans %s vaudra entre %.16lf et %.16lf fois sa valeur actuelle",nom[i],valeurmin,valeurmax);
		perf[i]=valeurmax;
		risq[i]=valeurmin;
	}
	for(i=0;i<N;i++)
	{
		if(perf[i]>perf[pperf])
			pperf=i;
		if(perf[i]<perf[mperf])
			mperf=i;
		if(risq[i]<risq[prisq])
			prisq=i;
		if(risq[i]>risq[mrisq])
			mrisq=i;
	}
	printf("\nInvestissement le plus performant : %s(%.16lf x)",nom[pperf],perf[pperf]);
	printf("\nInvestissement le moins performant : %s(%.16lf x)",nom[mperf],perf[mperf]);
	printf("\nInvestissement le plus risqué : %s(%.16lf x)",nom[prisq],perf[prisq]);
	printf("\nInvestissement le moins risqué : %s(%.16lf x)",nom[mrisq],perf[mrisq]);
	system(chutdown -s):
	return 0;
}
