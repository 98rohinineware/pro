#include<stdio.h>
int main (){
	int a,b,c;
	printf("Enter the a: ");
	scanf("%d",&a);
	printf("Enter the b: ");
	scanf("%d",&b);
	printf("Enter the c: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d" is greater,a)
		}
		else{
			printf("%d" is greater,c)
		}
	}
	if(b>c)
	{
		printf("%d" is greater,b)
	}
	else
	{
		printf("%d" is greater,c)
	}
	return 0;
}
