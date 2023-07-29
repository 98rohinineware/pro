#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a= ");
	scanf("%d",&a);
	printf("Enter b= ");
	scanf("%d",&b);
	printf("Enter c= ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			if(c>b)
			{
				printf("second max is= %d",c);
			}
			else
			{
				printf("second max is= %d",b);
			}
		}
		else if(a>b)
		{
			printf("second max is= %d",a);
		}
		else
		{
			printf("second max is= %d",b);
		}
	}
	else if(b>c)
	{
		if(c>a)
		{
			printf("smax is= %d",c);
	 	}
		else
		{
			printf("smax is= %d",a);
		}
	}
	else if(b>a)
	{
		printf("smax is= %d",b);
	}
	else
	{
		printf("smax is= %d",a);
	}
	return 0;
}
