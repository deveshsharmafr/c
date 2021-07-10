#include<stdio.h>

int main()
{
int i,j,k,l,lines;
printf("how many lines do you want:");
scanf("%d",&lines);

for(i=1;i<=lines;i++)
{
	for(j=1;j<=lines-i;j++)
	{
		printf(" ");
	}
	for(k=1;k<=i;k++)
	{
		printf("%d",k);
	
	}
	k=k-2;
	for(l=1;l<=i-1;l++)
	{
		printf("%d",k--);
	
	}
	printf("\n");

}





}
