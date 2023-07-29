#include<stdio.h>
int main()
{
	int units;
	printf("Enter units= ");
	scanf("%d",&units);
	if(units<=100)
	{
		printf("No charges");
	}
	else if(units<=200)
	{
		printf("bill= %d",(units-100)*5);
	}
	else
	{
		printf("bill= %d",((units-200)*10)+(100*5));
	}
	return 0;
}
