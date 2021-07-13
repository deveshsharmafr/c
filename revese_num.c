#include<stdio.h>
int main()
{
	int n=0,r=0,rev=0; 
	printf("Enter any value:-"); 
	scanf("%d",&n); 
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r; 
		n=n/10;  
	}
	printf("The reverse of this value is %d \n",rev); 
	return(0); 
}
