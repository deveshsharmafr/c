#include<stdio.h>
#include<stdlib.h>
int main ()
{
	system("clear");
        int a,b,rec;
        printf("Enter the length:");
        scanf("%d", &a);
        printf("Enter the bredth:");
        scanf("%d", &b);
        rec = a*b;
        printf("Area of this rectriangle is %d \n", rec);

        return 0;
	
}
