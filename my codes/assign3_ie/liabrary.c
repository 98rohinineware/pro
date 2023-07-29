#include<stdio.h>
int main()
{
	int day;
	printf("Enter number of days= ");
	scanf("%d",&day);
	if(day<=5)
	{
		printf("liabrary charge= %d",(day*2));
	}
	else if(day<=10)
	{
		printf("liabrary charge= %d",(day*3));
	}
	else if(day<=15)
	{
		printf("liabrary charges= %d",(day*4));
	}
	else
	{
		printf("liabrary charges= %d",(day*5));
	}
	return 0;
}
