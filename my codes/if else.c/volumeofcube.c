#include<stdio.h>
int main()
{
	int side;
	printf("Enter the side: ");
	scanf("%d",&side);
	int cube=(side*side*side);
	printf("Volume of a cube: %d",cube);
	return 0;
}
