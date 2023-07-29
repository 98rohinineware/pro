#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a value: ");
	scanf("%d",&a);
	printf("enter the b value: ");
	scanf("%d",&b);
	int r=a%b;
	printf("remainder is: %d",r);
	return 0;
}
