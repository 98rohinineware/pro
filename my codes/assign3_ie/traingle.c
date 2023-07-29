#include<stdio.h>    //16
int main()
{
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	if(a==b && b==c && c==a)
	{
		printf("it is equilateral");
	}
	else if((c*c)==(a*a)+(b*b) || (a*a)==(c*c)+(b*b) || (b*b)==(a*a)+(c*c))
	{
		printf("it is right angled triangle");//(cheak the number as this traingle 7,24,25//15,20,25)
	}
	else if(a!=b && b!=c && c!=a)
	{
		printf("it is scalene");
	}
	else if(a==b || b==c || c==a)
	{
		printf("it is isoscelene");
	}
	return 0;
}
