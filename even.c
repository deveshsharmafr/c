#include<stdio.h>
int main ()
{
	int start,end; 
	printf("Enter your strat limit:-");
	scanf("%d", &start);
	printf("Enter your End limit:-");
	scanf("%d", &end);
    for(int i=start;i<=end;i++)	
	{
		if(i%2==0)
		{
				printf("%d\n", i);
		}
	}
	return(0);
}
