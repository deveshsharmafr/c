#include<stdio.h>  
int main()    
{    
int n=0,r=0,rev=0,t=0;    
printf("Enter the number:");    
scanf("%d",&n);    
t=n;    
while(n!=0)    
{    
	r=n%10;    
	rev=(rev*10)+r;    
	n=n/10;    
}    
if(t==rev)    
	printf("This number is palindrome\n");    
else    
	printf("This number is not palindrome\n"); 
  
return 0;  
}   
