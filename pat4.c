/*
123456
12345
1234
123
12
1
*/


#include<stdio.h>

int main()
{
	int i,j,lines;
	printf("How many lines do you want to enter:");
	scanf("%d",&lines);
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines-i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	
	}
	
	return 0;
}
