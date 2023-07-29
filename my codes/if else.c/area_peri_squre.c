#include<stdio.h>
int main()
{
	int side;
	printf("Enter the side: ");
	scanf("%d",&side);
	int a=(side*side);
	int p=(4*side*side);
	printf("Area of squre: %d\n",a);
	printf("Perimeter of squre: %d",p);
	return 0;
}
