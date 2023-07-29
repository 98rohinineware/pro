/*#include<stdio.h>
int main()
{
	int n,s;
	scanf("%d",&n);
	s=0;
	int a=5;
	for (int i=1;i<=n;i++)
	{
		s=(s+a);
		a=(a*10)+5;
	}
	printf("%d",s);
	return 0;
}*/


/*#include<stdio.h>
int main()                                       //fc107
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for (int j=1;j<=10;j++)
		{
			printf("%d\n",j*i);
		}
	}
	return 0;
}*/


/*#include<stdio.h>                                     //fc108
int main()
{
	int n=10000;
	for(int i=1;i<=n;i++)
	{
		int s=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		       
		}
		if(s==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/



/*#include<stdio.h>                          //19 qus in book
int main()
{
	int n,s,r,a;
	scanf("%d",&n);                       //armstong
	
	for(int i=1;i<=n;i++)
	{	
		s=0;
		a=i;
		while (a>0)
		{
			r=a%10;
			s=s+(r*r*r);
			a=a/10;
		}
		if(s==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/




/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);                //factorial
	int factorial=1;
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a,n,m,s,r;
	scanf("%d%d",&n,&m);
	//int num=n;                                    //fc110
	while (n<=m)
	{
		int num=n;
		s=0;
		while (num > 0)
		{
			r=num%10;
			int f=1;
			for(int i=1;i<=r;i++)
			{
				f = f*i;
			}
			s=s+f;
			num=num/10;
		}
		if(s==n)
		{
			printf("%d\n",n);
		}
		n=n+1;
	}
	return 0;
}*/

			








