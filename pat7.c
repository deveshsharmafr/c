#include<stdio.h>


int main()
{
int n=0,lines=0,j=0,k=0,l=0,i=0;

printf("how many lines do you want:");
scanf("%d",&lines);

for(i=1;i<lines;i++ )
	n=n+2;

for(i=1;i<=lines;i++)
{
	for(j=1;j<=i;j++)
		printf("%d",j);

	for(k=1;k<=n;k++)
		printf(" ");

	n=n-2;
	for(l=1;l<=i;l++)
		printf("%d",l);		
		
	printf("\n");
}
return 0;
}

