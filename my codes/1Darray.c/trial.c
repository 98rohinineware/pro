/*#include<stdio.h>                   //bubble sort ascending order
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/



/*#include<stdio.h>                   //bubble sort decending order
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/


/*#include<stdio.h>                   //selection sort ascending order
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/


/*#include<stdio.h>                   //insertion sort ascending order  [5 ,42,0,55, 1]=output[0,1,5,42,55]
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i;j>0;j--)
		{
			if(a[j-1]>a[j])
			{
				int m=a[j-1]; 
				a[j-1]=a[j];
				a[j]=m;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/



/*#include<stdio.h>                                                             //linear search
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			printf("%d ",m);
		}
	}
	return 0;
}*/


/*#include<stdio.h>                                                             // binary search use only ascending order
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int low=0;
	int high=n-1;
	int m;
	scanf("%d",&m);
	while(low<=high)
	{
		int midvalue=low+(high-low)/2;
		if(a[midvalue]==m)
		{
			printf("%d",midvalue);
			return 0;
		}
		else if(a[midvalue]<m)
		{
			low=midvalue+1;
		}
		else
		{
			high=midvalue-1;
		}
	}
	printf("Element not found");
	return 0;
}*/


/*#include<stdio.h>                                                             // uniq number
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}*/



			


