#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the a: ");
	scanf("%d",&a);
	printf("Enter the b: ");
	scanf("%d",&b);
	printf("Enter the c: ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("Greater is: %d",a);
	}
	if(b>a && b>c)
	{
		printf("Greater is: %d",b);
	}
	else if(c>a && c>b)
	{	
		printf("Greater is: %d",c);
	}
	return 0;
}
