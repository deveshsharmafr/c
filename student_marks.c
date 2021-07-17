
#include<stdio.h>

int main()
{
	int s1=0,s2=0,s3=0,s4=0,s5=0,t=0,p=0;

	printf("Enter the marks of English:");
	scanf("%d",&s1);

	if ( s1 < 0 || s1 > 100 )
	{
		printf("Invalid marks.\n");
		return 0;
	}

	printf("Enter the marks of Maths:");
	scanf("%d",&s2);

	if ( s2 < 0 || s2 > 100 )
	{
		printf("Invalid marks.\n");
		return 0;
	}

	printf("Enter the marks of Sciences:");
	scanf("%d",&s3);

	if ( s3 < 0 || s3 > 100 )
	{
		printf("Invalid marks.\n");
		return 0;
	}

	printf("Enter the marks of Social Sciences:");
	scanf("%d",&s4);

	if ( s4 < 0 || s4 > 100 )
	{
		printf("Invalid marks.\n");
		return 0;
	}

	printf("Enter the marks of Computer:");
	scanf("%d",&s5);


	if ( s5 < 0 || s5 > 100 )
	{
		printf("Invalid marks.\n");
		return 0;
	}

	
	t = s1+s2+s3+s4+s5;
	p = t/5;
	if(p>=60)
		printf("The student got 1st divison \n");
	
	else if(p>=50 && p<60)
		printf("The student got 2nd divison \n");
	else if(p>=40 && p<50)
		printf("The student got 3rd division \n");
	else
		printf("The student is fail \n");
	
	
	printf("Total marks of the student:- %d percentage -:%d %\n",t,p);


return 0;
}
