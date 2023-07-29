#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a= ");
	scanf("%d",&a);
	printf("Enter b= ");
	scanf("%d",&b);
	int total=(a+b);
	if(a>20)
	{
		if(b>20)
		{
			if(total>45)
			{
				printf("print pass= %d",total);
			}
			else if(total==44)
			{
			//	(total=45)
				printf("moderated done= %d",45);
			}
			else
			{
				printf("result fail= %d",total);
			}
		}
		else if(total==45)
		{
			//(total==44)
			printf("tecnical fail= %d",44);
		}
		else
		{
	
			printf("tecnical fail= %d",44);
		}
	}
	else if(b>20)
	{
		if(total==45)
		{
			//(total==44)
			printf("tecnical fail= %d",44);
		}
		else
		{
			printf("print fail= %d",total);
		}
	}
	else
	{
		printf("result fail= %d",total);
	}
	return 0;
}
			
