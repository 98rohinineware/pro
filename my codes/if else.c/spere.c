#include<stdio.h>
int main()
{
	int radius;
	printf("Enter the radius: ");
	scanf("%d",&radius);
	float pi=3.14;
	int v=(4*3.14*radius*radius*radius)/3;
	printf(" volume of spere is: %d",v);
	return 0;
}
