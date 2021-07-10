#include<stdio.h>


int main()
{
int a=0,b=0,lines=0;
printf("Enter a integer:");
scanf("%d",&a);
printf("Enter another integer");
scanf("%d",&b);
 
   a = a + b;
   b = a - b;
   a = a - b;

   printf("a = %d\n b = %d\n",a,b);


}
