#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("clear");
	float a,b,div;

        printf("Enter a value:");
        scanf("%f", &a);
        printf("Enter a second  value:");
        scanf("%f", &b);
        div = a/b;
        printf("Division = %.2f \n", div);

	return 0;
}
