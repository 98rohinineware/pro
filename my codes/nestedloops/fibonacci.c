/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;                          //fc120
	int c=0;
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                      //fc119
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			int c=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c=c+1;
				}
				
			}	
			if(c==2)
			{
				printf("%d\n",i);
			}
		}
	}
	return 0;
}*/



/*#include<stdio.h>
int main()                                          //fc118
{
	int n;
	scanf("%d",&n);
	int s=0;
	for(int i=1;i<=n;i++)
	{
			int c=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c=c+1;
				}
				
			}	
			if(c==2)
			{
				s=s+i;
			}
		
	}
	printf("%d",s);
	return 0;
}*/


/*#include<stdio.h>
int main()                                          //fc117
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
			int c=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c=c+1;
				}
				
			}	
			if(c==2)
			{
				printf("%d\n",i);
			}
		
	}
	return 0;
}*/





/*#include<stdio.h>
#include<limits.h>
int main()                                    //fc114
{
	int n,a;
	scanf("%d",&n);
	int min=INT_MAX;
	int max=INT_MIN;
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>max)
		{
			max=a;
		}
		if(a<min)
		{
			min=a;
		}
	}
	
	printf("%d %d",max,min);
	return 0;
}*/


/*#include<stdio.h>
#include<limits.h>
int main()
{                                                 //fc115
	int n,a;
	scanf("%d",&n);
	int max=INT_MIN;
	int secondmax=INT_MIN;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a > max)
		{
			secondmax=max;
			max=a;
		}
		else if(a > secondmax && a < max)
		{
			secondmax=a;
		}
	}
	printf("%d",secondmax);
	
}*/


/*#include<stdio.h>
#include<limits.h>
int main()
{
	int n,a;
	scanf("%d",&n);                             //fc116
	int max=INT_MIN;
	int secondmax=INT_MIN;
	int thirdmax=INT_MIN;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a > max)
		{
			thirdmax=secondmax;
			secondmax=max;
			max=a;
		}
		else if(a > secondmax && a < max)
		{
			thirdmax=secondmax;
			secondmax=a;
		}
		else if(a > thirdmax && a < secondmax && a < max)
		{
			thirdmax=a;
		}
	}
	printf("%d",thirdmax);
	
}*/



/*#include <stdio.h>

int main() {
    int n, a, hcf;
    scanf("%d", &n);                                //fc112 (this is the AI ans) 
    
    if (n > 0) {
        scanf("%d", &hcf);
        
        for (int i = 1; i < n; i++) {
            scanf("%d", &a);
            
            while (a != 0) {
                int r = hcf % a;
                hcf = a;
                a = r;
            }
        }
        
        printf("%d\n", hcf);
    }
    
    return 0;
}*/




