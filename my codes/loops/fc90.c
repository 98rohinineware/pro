/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	printf("%d",sum);
	return 0;
}*/


/*#include<stdio.h>          //fc91
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=2;i<=n;i++)
	{
		if (i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}*/



/*#include<stdio.h>
int main()
{                                              
	int n=100;
	int c=0;
	int s=0;
	for(int i=0;i<=1000;i++)
	{
		if(i%2==0);
		{
			c=c+1;
			s=s+i;
			i=i+1;
		}
	}
	printf("%d\n",s);
	return 0;
}*/


/*#include<stdio.h>




/*#include<stdio.h>          //fc93
int main()
{
	int n;
	n=100;
	for(int i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}*/



/*#include<stdio.h>            //fc94
int main()
{
	int n;
	scanf("%d",&n);
	int p=1;
	for(int i=1;i<=n;i++)
	{
		p=(p*i);
	}
	printf("%d",p);
	return 0;
}*/


/*#include<stdio.h>
int main()                                        //fc95
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			if(i%7==0)
			{
				printf("%d  ",i);
			}
		}
	}
	return 0;
}*/
		


/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);                             //fc96
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%3==0)
		{	//int k=pow(i,2);
			sum=sum+(i*i);
		}
	}
	printf("%d\n",sum);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;                                    //fc96
	for(int i=1;i<=n;i++)
	{
		if(i%3==0)
		{	
			sum=sum+(i*i);
		}
	}
	printf("%d\n",sum);
	return 0;
}*/


/*#include<stdio.h>                                  //fc97
int main()
{
	int n;
	scanf("%d",&n);
	float sum=1;
	for(float i=2;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("%f",sum);
	return 0;
}*/                                                 



/*#include<stdio.h>
int main() 
{                                         //fc98
	int m,n,p,q;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	int sum=0;
	for(int i=m;i<=n;i++)
	{
		if(i%p==0 && i%q!=0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int a,b,p,hcf,lcm,r;
	scanf("%d",&a);                      //fc99
	scanf("%d",&b);
	p=(a*b);
	while (b>0)
	{
		r=(a%b);
		a=b;
		b=r;
	}
	hcf=a;
	lcm=(p/hcf);
	printf("%d\n%d",hcf,lcm);
	return 0;
}*/


/*#include<stdio.h>
int main()                                     //fc100
{
	int n,s,r;
	scanf("%d",&n);
	s=0;
	while (n>0)
	{
		r=(n%10);
		s=(s+r);
		n=(n/10);
	}
	printf("%d",s);
	return 0;
}*/
	
	

/*#include<stdio.h>                            //fc101
int main()
{
	int n,p,r;
	scanf("%d",&n);
	p=0;
	while(n>0)
	{
		r=(n%10);
		p=(p*10)+r;
		n=(n/10);
	}
	printf("%d",p);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;                                  //fc102
	scanf("%d",&n);
	for(int f=1;f<=n;f++)
	{
		if(n%f==0)
		{
			printf("%d\n",f);
		}
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
		if(s==n)                                   //fc103
		{
			printf("number is perfect");
		}
		else
		{
			printf("not perfect");
		}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n,c;                                //fc104
	scanf("%d",&n);
	c=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
		
	}
	if(c==2)
	{
		printf("no is prime");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}*/




			
