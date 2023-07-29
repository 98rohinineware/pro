/*#include<stdio.h>                                        //*
int main()                                                 //**
{                                                          //***
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{                                                           //star square
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                    //ulta triangle
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>                                     ///1
int main()                                              // 1 2
{                                                       // 1 2 3 
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}*/

#include<stdio.h>                                        //*
int main()                                                 //**
{                                                          //***
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n*2;i++)
	{
		int j;
		for( j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		for(int i=n;i>n-i;i--)
		{
			printf("*");
		}
		
	}
	printf("\n");
	return 0;
}
