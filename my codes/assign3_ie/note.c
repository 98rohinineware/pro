#include<stdio.h>
int main()
{
	int n;
	printf("Enter number= ");
	scanf("%d",&n);
	if(n>=2000)
	{
		printf("note 2000= ",2000);
	}
	else if(n>=500)
	{
		printf("note 500= ",500);
	}
	else if(n>=200)
	{
		printf("note 200= ",200);
	}
	else if(n>=100)
	{
		printf("note 100= ",100);
	}
	else if(n>=20)
	{
		printf("note 20= ",20);
	}
	else if(n>=10)
	{
		printf("note 10= ",10);
	}
	else if(n>=5)
	{
		printf("note 5= ",5);
	}
	else if(n>=2)
	{
		printf("note 2= ",2);
	}
	else if(n>=1)
	{
		printf("note 1= ",1);
	}
	else 
	{
		printf("invalid");
	}
	return 0;
}	
