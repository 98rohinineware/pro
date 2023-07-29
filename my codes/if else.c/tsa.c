#include<stdio.h>
int main()
{
	int tsa,lsa,side;
	printf("Enter the side: ");
	scanf("%d",&side);
	lsa=(4*side*side);
	tsa=(6*side*side);
	printf("Total surface area: %d\n",tsa);
	printf("lateral surface area: %d",lsa);
	return 0;
}
	
