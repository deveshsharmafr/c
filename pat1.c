/*
1
22
333
4444
55555
666666
*/

#include<stdio.h>
int main ()
{
int k;
printf("Enter a number:");
scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i );
		}
		printf("\n"); 
	}
	return 0 ;
}
