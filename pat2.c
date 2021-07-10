#include<stdio.h>
int main ()
{
int lines=0,i=0,j=0,x=0;
printf("Enter how many lines:");
scanf("%d",&lines);

        for(i=1;i<=lines;i++)
        {
		x = 65;
                for(j=1;j<=i;j++)
                {
			
                        printf("%c",x);
			x++;
                }
                printf("\n");
        }
        return 0 ;
}

