#include<stdio.h>
int main()
{
	int hours,rate,wages;
	printf("Enter the number of hours: ");
	scanf("%d",&hours);
	printf("Enter the wages rate: ");
	scanf("%d",&rate);
	wages=(hours * rate);
	printf("%d",wages);
	return 0;
}
	
