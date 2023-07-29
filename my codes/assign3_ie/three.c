#include<stdio.h>
int main()
{
	float u,bill,ebill;
	printf("Enter unit= ");
	scanf("%f",&u);
	if(u<=50)
	{
		bill=(u*0.50);
		ebill=(bill+20)/100;
		printf("ebill is= %f",ebill);
	}
	else if(u<=150)
	{
		bill=(u*0.75);
		ebill=(bill+20)/100;
		printf("ebill is= %f",ebill);
	}
	else if(u<=250)
	{
		bill=(u*1.20);
		ebill=(bill+20)/100;
		printf("ebill is= %f",ebill);
	}
	else 
	{
		bill=(u*1.50);
		ebill=(bill+20)/100;
		printf("ebill is= %f",ebill);
	}
	return 0;
}
			
