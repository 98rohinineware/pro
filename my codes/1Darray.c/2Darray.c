/*#include<stdio.h>
int main()
{
	int r;
	printf("Enter the rows: ");         // sum of the matrics
	scanf("%d",&r);
	int c;
	printf("Enter the coloums: ");
	scanf("%d",&c);
	printf("Elements in the array: "); 
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			
			scanf("%d",&arr[i][j]);
		}
		
	}
	printf("\n");
	int sum=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			 sum+=arr[i][j];
		}
	}
	printf("Sum of the given matricx %d: ",sum);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int arr[2][2]={{1,2},{2,3}};          // sum of two matrics
	int brr[2][2]={{2,1},{3,2}};
	int sum=0;
	int crr[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum=arr[i][j]+brr[i][j];
			crr[i][j]=sum;
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",crr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>                  //maximum number of 1 and its index
int main()
{
	int arr[3][4]={{1,0,0,1},{1,1,0,1},{1,1,1,1}};
	int maxcount=0;
	int maxIdx=-1;
	for(int i=0;i<3;i++)
	{
		int count=0;
		for(int j=0;j<4;j++)
		{
			
			if (arr[i][j]==1) count++;
		}
		if(maxcount<count){
			maxcount=count;
			maxIdx=i;
		}
		printf("\n");
	}
	printf("%d\n%d",maxIdx,maxcount);
	return 0;
}*/
	
	
/*#include<stdio.h>
int main()
{
	int r;
	printf("Enter the rows: ");         // transpose the matrics
	scanf("%d",&r);
	int c;
	printf("Enter the coloums: ");
	scanf("%d",&c);
	printf("Elements in the array: "); 
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}*/	


/*#include<stdio.h>
int main()                          //multiplication of two matricx
{
	int a[3][2]={{1,2},{3,4},{5,6}};
	int b[2][4]={{1,2,3,4},{5,6,7,8}};
	int res[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			res[i][j]=0;
			int cr=2;
			for(int k=0;k<cr;k++)
			{
				res[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
		printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>                 //this is also maltiplication but in long wayn but it is easy to learn
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	int b;
	printf("enter the number: ");
	scanf("%d",&b);
	int p[a][b];
	printf("enter the first elements: ");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	int m;
	printf("enter the number: ");
	scanf("%d",&m);
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int q[m][n];
	printf("enter the first elements: ");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&q[i][j]);
		}
	}
	if(b!=m)
	{
		printf("maltiplication not found");
	}
	else
	{
		int res[a][n];
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<n;j++)
			{
				res[i][j]=0;
				for(int k=0;k<m;k++)
				{
					res[i][j]+=p[i][k]*q[k][j];
				}
			}
		}
		printf("The result matrix is: ");
		for(int i=0;i<a;i++)
	    	{
			for(int j=0;j<n;j++)
			{
				printf("%d ",res[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}*/


/*#include<stdio.h>                   //wave printing      
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	int b;
	printf("enter the number: ");
	scanf("%d",&b);
	int p[a][b];
	printf("enter the first elements: ");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(int i=0;i<a;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<b;j++)
			{
				printf("%d ",p[i][j]);
			}
		}
		else
		{
			for(int j=b-1;j>=0;j--)
			{
				printf("%d ",p[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}*/



/*#include<stdio.h>                   //wave printing      
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	int b;
	printf("enter the number: ");
	scanf("%d",&b);
	int p[a][b];
	printf("enter the first elements: ");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(int i=0;i<a;i++)
	{
		if(i%2==0)
		{
			for(int j=a-1;j>=0;j--)
			{
				printf("%d ",p[i][j]);
			}
		}
		else
		{
			for(int j=0;j<=a-1;j++)
			{
				printf("%d ",p[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}*/


#include<stdio.h>                   //spiral printing    incompleted 
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	int b;
	printf("enter the number: ");
	scanf("%d",&b);
	int p[a][b];
	printf("enter the first elements: ");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	int minr=0;
	int maxr=a-1;
	int minc=0;
	int maxc=b-1;
	int totalnumber=a+b;
	int c=0;
	while(c<totalnumber)
	{
		for(int j=minc;j<=maxc;j++)
		{
			printf("%d ",p[minr][j]);
			c++;
		}
		minr++;
		for(int i=minr;i<=maxr;i++)
		{
			printf("%d ",p[i][maxc]);
			c++;
		}
		maxc--;
		for(int j=maxc;j>=minc;j--)
		{
			printf("%d ",p[maxr][j]);
			c++;
		}
		maxr--;
		for(int i=maxr;i>=minr;i--)
		{
			printf("%d ",p[i][minc]);
			c++; 
		}
		minc++;
	}
	return 0;
}
		
		 
