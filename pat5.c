#include<stdio.h>

int main()
{
int k,j,i,lines;
printf("How many lines do you want:");
scanf("%d",&lines);
for(i=1;i<=lines;i++)
{
	for(j=1;j<=i-1;j++)
	{
	printf(" ");
	}
	for(k=1;k<=lines-i+1;k++)
	{
		printf("%d",k);
	}
	printf("\n");

}

}
