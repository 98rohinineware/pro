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
	int lsa=2*h*(l+b);
	int tsa=2*(l*b)+(b*h)+(l*h);
	printf("Total surface area: %d\n",tsa);
	printf("lateral surface area: %d",lsa);
	return 0;
}
