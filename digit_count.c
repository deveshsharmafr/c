#include <stdio.h>  
int main()  
{  
   int n;    
   int c=0;  
   printf("Enter a number:");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       c++;  
   }  
     
   printf("The number of digits in this number is: %d \n",c);  
    return 0;  
}  
