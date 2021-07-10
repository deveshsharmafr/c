/*123456654321==0
12345    54321 --4
1234        4321 ==8
123            321 ==12
12                21==16 
1                   
1 ==20
*/
#include<stdio.h>


int main()
{
int i,k,j,l,lines,n;
n=0;

printf("How many lines do you want");
scanf("%d",&lines);

for(i=1;i<=lines;i++)
{
	for(j=1;j<=lines-i+1;j++)
	{
		printf("%d",j);
	}
	for(k=1;k<=n;k++)
	{
		printf(" ");	
	}
		
	for(l=1;l<=lines-i+1;l++)
	{
		printf("%d",l);
				
	}
			
printf("\n");
n=n+2;

}
return 0;
}
