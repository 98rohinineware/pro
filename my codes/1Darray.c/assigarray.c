/*#include <stdio.h>                                      //fc198

int main()
{
    int a[20];  // Fixed the array declaration to have a size of 20
    for (int i = 0; i < 20; i++)  // Changed the loop condition to iterate from 0 to 19
    {
        a[i] = i + 1;  // Store the natural numbers in the array
    }

    for (int i = 0; i < 20; i++)  // Loop to print the elements of the array
    {
        printf("%d ", a[i]);
    }

    return 0;
}*/


/*#include<stdio.h>                                  //fc199

int main()
{
    char names[5][50];  // Declare a 2D array to store 5 names, each with a maximum length of 50 characters

    for(int i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i+1);
        scanf("%s", names[i]);  // Use %s format specifier to read a string and store it in names[i]
    }

    printf("Names entered:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);  // Print each name on a new line
    }

    return 0;
}*/


/*#include<stdio.h>                                //fc200

int main()
{
    int arr[3] = {1998,06,06};
    
    for(int i = 2; i >= 0; i--)
    {
        printf("%d ", arr[i]);  // Print each element of the array in reverse order
    }
    
    return 0;
}*/


/*#include<stdio.h>
                                                 //fc201
int main()
{
    int arr[6] = {6,5,4,3,2,1};
    
    for(int i = 5; i >= 0; i-=2)
    {
        printf("%d ", arr[i]);  // Print each element of the array in reverse order
    }
    
    return 0;
}*/

	


/*#include<stdio.h>

int main()
{                                                  //fc202
    int arr[6] = {6,5,4,3,2,1};
    int i;
    
    printf("Enter the value of i: ");
    scanf("%d", &i);
    
    for(int j = 6 - i; j < 6; j++)
    {
        printf("%d ", arr[j]);
    }
    
    return 0;
}*/



/*#include<stdio.h>
                                          //fc203
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int num;
    int c = 0;  
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == num)
        {
            c = 1;  // Set the flag to 1 if the number is found in the array
            break;       // Exit the loop since the number is found
        }
    }
    if(c==1)
    {
        printf("Exists\n");
    }
    else
    {
        printf("Does not exist\n");
    }
    return 0;
}*/



/*#include<stdio.h>                 //   palindrome no. code
int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int brr[n];
	int c=0;
	for(int i=n-1;i>=0;i--)
	{
		brr[i]=arr[n-(i+1)];
		if(arr[i]==brr[i])
		{
			c=c+1;
		}
	}
	if (c==n)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
		
	return 0;
}*/
		




/*#include<stdio.h>
int main()
{
	int arr[5];
	int sum=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);                         //fc205
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	int avg=sum/5;
	printf("%d",avg);
	return 0;
}*/





/*#include<stdio.h>                                         
                                                                //fc207
int main()
{
    int n;
    scanf("%d", &n);
    int pc = 0;
    int nc = 0;
    
    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        
        if(a >= 0)
        {
            pc += 1;
        }
        else if(a < 0)
        {
            nc += 1;
        }
    }
    
    printf("Positive Count: %d\n", pc);
    printf("Negative Count: %d\n", nc);
    
    return 0;
}*/


/*#include <stdio.h>

int main()
{                                                               //fc208
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int duplicateFound = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicateFound = 1;
                break;
            }
        }
        
        if (duplicateFound == 1)
        {
            printf("%d is a duplicate.\n", arr[i]);
            duplicateFound = 0;
        }
    }
    printf("no duplicates");
    return 0;
}*/


/*#include <stdio.h>

int main()
{                                                               //fc209
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * (i + 1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}*/


/*#include <stdio.h>

int main()
{                                                            //fc210
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * i + 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}*/




/*#include <stdio.h>
                                                            //fc11
int main()
{
    int n;
    scanf("%d", &n);
    
    int factors[n];  // Assuming the maximum number of factors is n
    
    int count = 0;  // Counter for the number of factors
    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factors[count] = i;
            count++;
        }
    }
    
    printf("Factors of %d: ", n);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", factors[i]);
    }
    
    return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n-1;i++)
	{
		int c=0;
		for(int j=1;j<=n-1;j++)             //fc212
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			printf("%d ",i);
		}
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)                   //consecutive fc204
	{
	int b;
	scanf("%d",&b);
	arr[i]=b;
	}
	int brr[n];
	int i=0;
	int s=arr[i];
	for(int j=0; j<n; j++)
	{
		brr[j]=s;
		s=s+1;
		}
	for(int i=0; i<n; i++){
	if(arr[i]==brr[i]){
	c=c+1;
	}
	}
	if(c==n){
	printf("array is consecutive\n");
	}else{
	printf("array is not consecutive\n");
	}	
	return 0;
	
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-1;j++)             //fc212
		{
			if(arr[i]%arr[j]==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int c=0;
		for(int j=1;j<=arr[i];j++)             //fc212 prime number
		{
			if(arr[i]%j==0)
			{
				c=c+1;
				
			}
		}
		if(c==2)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}*/
	

/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n;i++)
	{
		sum=0;
		for(int j=1;j<arr[i];j++)             //fc213 prfect no
		{
			if(arr[i]%j==0)
			{
				sum=sum+j;
				
			}
		}
		if(sum==arr[i])
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}*/		


/*#include<stdio.h>
int main()
{
	int n;
	printf("Enter armstrong numbetr n: ");
	scanf("%d",&n);
	int arr[n];
	int c=0;
	for(int i = 1 ; i <= n ; i++)
	{
		int p = i;                                             //fc214 armstrong
		int s = 0;
		while(p > 0)
		{
			int r = p % 10;
			s = s + r * r * r;
			p = p / 10;
		}
		if ( s == i)
		{
			arr[c] = i;
			c++;
		}
	}
	printf("Armstrong number up to %d; ",n);
	for( int i = 0 ; i < c ; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{                                                //fc215
	int n;
	scanf("%d",&n);
	int arr[n];
	int f=1;
	for(int i=0;i<n;i++)
	{
		f=f*(i+1);
		arr[i]=f;
	}
	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	return 0;
}*/
		
	
/*#include<stdio.h>
int main()
{                              //fc216    
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[n];
	int ec=0;
	int oc=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(arr[i]%2==0)
		{
			ec+=1;
		}
		else
		{
			oc+=1;
		}
	}
	printf("%d %d",ec,oc);
	return 0;
}*/
			
/*#include<stdio.h>
int main()                                   //fc217   **
{
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se=0;
	int so=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			se=se+arr[i];
			
		}
		else
		{
			so=so+arr[i];
		}
	}
	printf("%d %d",se,so);
	return 0;
}*/


/*#include<stdio.h>                           //fc220
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=n;i>0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                        //fc221
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>max)
		{ 	
			max=arr[i];
		}
	}
	printf("%d ",max);
	return 0;
}*/
	


/*#include<stdio.h>                         //fc222
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		arr[i]=i;
	}
	for(int i=n;i>=1;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}*/	













