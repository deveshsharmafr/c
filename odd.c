#include<stdio.h>
 
int main()
{
  	int i, num;
 
  	printf("\n Please Enter the limit:  ");
  	scanf("%d", &num);
  
  	printf("\n Odd Numbers between 1 and %d are : \n", num);
  	for(i = 1; i <= num; i++)
  	{
    		if ( i % 2 != 0 ) 
  			printf(" %d ", i);
    	
  	}
	printf("\n");

return 0;
 }

