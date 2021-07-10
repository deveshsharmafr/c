#include<stdio.h>
int main()
{
	int a = 0;

	printf("Enter  any integer:"); 
	scanf("%d",&a); 
	if(a>0)
		printf("This integer is +ve \n"); 
	else 
	{
		if(a<0)
			printf("This integer is -ve\n"); 
		else
			printf("The integer is 0 this number is not +ve and not -ve!\n");
	}
	return(0); 
}
