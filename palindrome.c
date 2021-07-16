#include<stdio.h>  
int main()    
{    
int n=0,r=0,sum=0,temp=0;    
printf("Enter the number:");    
scanf("%d",&n);    
temp=n;    
while(n!=0)    
{    
	r=n%10;    
	sum=(sum*10)+r;    
	n=n/10;    
}    
if(temp==sum)    
	printf("This number is palindrome\n");    
else    
	printf("This number is not palindrome\n"); 
  
return 0;  
}   
