#include<stdio.h>
int main()
{
	int principle,rate,time,si;
	printf("Enter the principle: ");
	scanf("%d",&principle);
	printf("Enter the rate: ");
	scanf("%d",&rate);
	printf("Enter the time: ");
	scanf("%d",&time);
	si=(principle*rate*time)/100;
	printf("simple interest is: %d",si);
	return 0;
}
