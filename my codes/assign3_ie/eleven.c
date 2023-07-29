#include<stdio.h>
int main()
{
	int a,c;
	float b;
	printf("Enter rockwell hardness a= ");
	scanf("%d",&a);
	printf("Enter carbon content b= ");
	scanf("%f",&b);
	printf("Enter tensile strength c= ");
	scanf("%d",&c);
	if(a>50 && c>5600)
	{
		printf("grade 7");
	}
	else if(b>0.7 && c<5600)
	{
		printf("grade 8");
	}
	else if(a>50 && b>0.7)
	{
		printf("grade 9");
	}
	else if(a>50 && b>0.7 && c>5600)
	{
		printf("grade 10");
	}
	else
	{
		printf("grade 0");
	}
	return 0;
}
	
	
	
