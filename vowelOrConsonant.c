
#include<stdio.h>
int main()
{
        char a;
        printf("Enter  any character:");
        scanf("%c",&a); 
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o'|| a == 'u')
        
                printf("This character is vowel \n");
       
        else
        
                printf("This character is a consonant \n");
        
  return 0;
}
