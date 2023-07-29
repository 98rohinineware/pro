#include<stdio.h>
int main()
{
	int l,b,h;
	printf("Enter the length: ");
	scanf("%d",&l);
	printf("Enter the breath: ");
	scanf("%d",&b);
	printf("Enter the height: ");
	scanf("%d",&h);
	int cuboid=l*b*h;
	printf("volume of cuboid: %d",cuboid);
	return 0;
}
	
