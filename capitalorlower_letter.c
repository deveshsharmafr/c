#include<stdio.h>

int main()
{
int usr;
printf("Enter a character in caps or in lowercase:");
scanf("%c",&usr);
if(usr<='z' && usr>='a')

printf("This character is in lowercase \n");

else

printf("This character is uppercase \n");


}
