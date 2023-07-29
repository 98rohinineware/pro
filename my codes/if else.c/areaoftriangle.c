#include<stdio.h>
int main()
{
	int height,base,area;
	printf("Enter the height: ");
	scanf("%d",&height);
	printf("Enter the base: ");
	scanf("%d",&base);
	area = (base*height)/2;
	printf("Area of triangle is : %d",area);
	return 0;
}
	
