#include<stdio.h>  
 int main()    
{    
int n=0,r=0,sum=0,temp=0;    
printf("Enter a number:");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
printf("This number is an armstrong number\n");    
else    
printf("This number is not an armstrong number\n");    
return 0;  
}   
