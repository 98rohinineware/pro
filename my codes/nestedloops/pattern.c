/*#include<stdio.h>
int main()
{
	int n,m,p;                                          //1
	scanf("%d",&n);                                       11
	p=1;                                                  121
	for(int i=1;i<=n;i++)                                 1321
	{                                                     14321
		if(i==1)                                      154321
		{
			printf("%d ",1);
		}
		printf("\n");
		for(int k=1;k<=1;k++)
		{
			printf("%d ",k);
		}
		for(int m=p;m>=1;m--)
		{
			printf("%d ",m);
		}
		p=p+1;
		
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n,m,p;                                       //1
	scanf("%d",&n);                                    11
	p=1;                                               1221
	for(int i=1;i<=n;i++)                              123321
	{                                                  12344321
		if(i==1)                                   1234554321
		{
			printf("%d ",1);
		}
		printf("\n");
		for(int k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		for(int m=p;m>=1;m--)
		{
			printf("%d ",m);
		}
		p=p+1;
		
	}
	return 0;
}*/



/*#include <stdio.h>                                     //      1
                                                               1 2
int main()                                                   1 2 3
{                                                          1 2 3 4
    int n;                                               1 2 3 4 5
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (int j = (j - 2); j >= 1; j--)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}*/



/*#include <stdio.h>                                 //31
int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (int j = (i - 1); j >= 1; j--)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}*/



/*#include<stdio.h>

int main()
{                                                    //fc111
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
    
    return 0;
}*/



/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)                            //*
	{                                                  **
		for(int j=1;j<=i;j++)                      ***
		{                                          
			printf("*");                                            
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n;
	for(int i=1;i<=n;i++)                            //****
	{       
		                                       //  ***
		for(int j=1;j<=a;j++)              //      **
		{                                 //
			printf("*");                                          
		}
		printf("\n");
		a--;
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);                                 1
	for(int i=1;i<=n;i++)                           12
	{                                               123
		for(int j=1;j<=i;j++)                   1234
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);                                 1
	for(int i=1;i<=n;i++)                           12
	{                                               123
		for(int j=1;j<=i;j++)                   1234
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n;
	for(int i=1;i<=n;i++)                            //1234
	{       
		                                       //  123
		for(int j=1;j<=a;j++)              //      12
		{                                 //       1
			printf("%d",j);                                          
		}
		printf("\n");
		a--;
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);                              //1
	for(int i=1;i<=n;i++)                          13                       
	{                                              135 
		a=1;                                   1357   
		for(int j=1;j<=i;j++)                   
		{
			printf("%d",a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{                                                     //ABCD
	int n,m;                                        ABCD
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		m=1;
		for(int j=1;j<=n;j++)
		{
			int a=m+64;
			char ch = (char) a;
			printf("%c ",ch);
			m=m+1;
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h>                                //A
int main()                                           AB
{                                                    ABC
	int n,m;                                     ABCD
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		m=1;
		for(int j=1;j<=i;j++)
		{
			int a=m+64;
			char ch = (char) a;
			printf("%c ",ch);
			m=m+1;
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>                                //  1
int main()                                      //     AB
{                                                 //   123
	int n,a,m;                                   //ABCD
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			m=1;
			
			for(int j=1;j<=i;j++)
			{
				int a=m+64;
				char ch = (char) a;
				printf("%c ",ch);
				m=m+1;
			}
		}
		
		else
		{
			for(int p=1;p<=i;p++)
			{
				printf("%d ",p);
			}
		}
		printf("\n");
		
		
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                       //*
{                                                 ***
	int n;                                     *
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==n/2+1 || i==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)                             //hollowrectangl
	{
		for(int j=1;j<=m;j++)
		{
			if( i==1 ||  i==n || j==1 || j==m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	n--;
	return 0;
}*/




/*#include<stdio.h>
int main()                                               *  *
{                                                         **
	int n;                                            *
	scanf("%d",&n);                                   **
	for(int i=1;i<=n;i++)                            *  *
	{
		for (int j=1;j<=n;j++)
		{
			if(i==j || i+j==n+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                             //1
{                                                        2 3
	int n,a;                                         4 5 6
	scanf("%d",&n);
	a=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",a);
			a=a+1;
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                             //1
{                                                     // 0 1
	int n,a;                                     //  1 0 1
	scanf("%d",&n);                            //    0 1 0 1
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		a=1;
		else(a=0);
		for(int j=1;j<=i;j++)
		{
			printf("%d",a);
			if(a==0) a=1;
			else(a=0);	
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()                                             //1
{                                                     // 0 1
	int n,a;                                     //  1 0 1
	scanf("%d",&n);                            //    0 1 0 1
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;                                              //      *
	scanf("%d",&n);                                     //    * *
	                                                   //   * * *
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("#");
		}
			for(int k=1;k<=i;k++)
			{
				printf("*");
			}
			printf("\n");
	}
	
	return 0;
}*/	


/*#include<stdio.h>
int main()
{
	int n;                                              //  # # * * * *
	scanf("%d",&n);                                     //  # * * * *
	                                                    //   * * * *
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("#");
		}
			for(int k=1;k<=n;k++)
			{
				printf("*");
			}
			printf("\n");
	}
	
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;                                              //      A
	scanf("%d",&n);                                     //    A B
	                                                   //   A B C
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("#");
		}
			char mh=65;
			for(int k=1;k<=i;k++)
			{
				char ch=(char)mh; 
				printf("%c",ch);
				mh=mh+1;
			}
			printf("\n");
	}
	
	return 0;
}*/		


/*#include<stdio.h>
int main()
{
	int n;                                              //      *
	scanf("%d",&n);                                     //     * *
	                                                   //     * * *
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
			for(int k=1;k<=i;k++)
			{
				 
				printf("*");
				
			}
			for(int p=1;p<=i-1;p++)
			{
				printf("*");
			}
			printf("\n");
	}
	
	return 0;
}*/		


/*#include<stdio.h>
int main()
{
	int n;                                              //      1
	scanf("%d",&n);                                     //     1 2
	                                                   //     1 2 3
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
			int a=1;
			for(int k=1;k<=i;k++)
			{
				 
				printf("%d",a);
				a=a+1;
			}
			for(int p=1;p<=i-1;p++)
			{
				printf("%d",a);
				a=a+1;
			}
			printf("\n");
	}
	
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;                                              //      *
	scanf("%d",&n);                                     //     * *
	int nst=1;
	int nsp=i-1;                                       //     * * *
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=nsp;j++)            //collegewallahlogic
		{
			printf(" ");
		}
		nsp=nsp-1;
			for(int k=1;k<=nst;k++)
			{
				 
				printf("*");
				
			}
			nst=nst+2;
			printf("\n");
	}
	
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;                                              //      A
	scanf("%d",&n);                                     //    A B c
	int sp=1;                                            //  A B C D
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("#");
		}
			char mh=65;
			for(int k=1;k<=sp;k++)
			{
				char ch=(char)mh; 
				printf("%c",ch);
				mh=mh+1;
			}
			sp=sp+2;
			printf("\n");
	}
	
	return 0;
}*/		


/*#include<stdio.h>
int main()
{
	int n;                                              //       1
	scanf("%d",&n);                                     //     1 2 1
	                                                   //    1 2 3 2 1
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
			int a=1;
			for(int k=1;k<=i;k++)
			{
				 
				printf("%d",a);
				a=a+1;
			}
			int m=i-1;
			for(int p=1;p<=i-1;p++)
			{
				printf("%d",m);
				m=m-1;
			}
			printf("\n");
	}
	
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
			
		}
		char ch=65;
		for(int j=1;j<=i;j++)
		{
			
			printf("%c",ch);
			ch++;
		}
		for(int k=i-1;k>=1;k--)
		{
			//char ch='A';
			printf("%c",(k+64));
			
		}
		//ch--;
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int nsp=n-1;                             //star katli
	int nst=1;
	int ml=n/2+1;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
		}
		for(int j=1;j<=nst;j++)
		{
			printf("*");
		}
	if(i<ml)
	{
			nsp--;
			nst+=2;
	}
	else
	{
			nsp++;
			nst-=2;
	}
	printf("\n");
	}
	return 0;
}*/



/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);                             //****
	int nsp=0;                                 //  ***
	int nst=n;                                  //  **
	for(int i=1;i<=n;i++)                         // *
	{
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
		}
		nsp++;
		for(int j=1;j<=nst;j++)
		{
			printf("*");
		}
		nst--;
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);                             //********
	int nsp=0;                                 // ***  ***
	int nst=n;                                  //**    **
	for(int i=1;i<=n;i++)                       //*      *
	{
		for(int j=1;j<=nst;j++)
		{
			printf("*");//nsp=1 & new loop forthe stright starline
		}                                //(i<=2*n+1)
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
		}
		nsp+=2;
		for(int j=1;j<=nst;j++)
		{
			printf("*");
		}
		nst--;
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{                                              //collegewallah
	int n;
	scanf("%d",&n);                             //1234567
	int nsp=1;                                 // 123 567
	int nst=n;                                //  12   67
	for(int i=1;i<=2*n+1;i++)                 //  1     7
	{
		printf("%d",i);
	}
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		int a=1;     
		for(int j=1;j<=nst;j++)
		{
			printf("%d",a);
			a++;//nsp=1 & new loop forthe stright starline
		}                                //(i<=2*n+1)
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
			a++;
		}
		nsp+=2;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",a);
			a++;
		}
		nst--;
		printf("\n");
	}
	return 0;
}*/



/*#include<stdio.h>                          //samecode but slove by myself
int main()
{
	int n;
	scanf("%d",&n);                             //1234567
	int nsp=1;                                 // 123 567
	int nst=n;                                //  12   67
	for(int i=1;i<=2*n+1;i++)                 //  1     7
	{
		printf("%d",i);
	}
	printf("\n");                                
	for(int i=1;i<=n;i++)                       
	{
		int a=1;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",a);
			a++;//nsp=1 & new loop forthe stright starline
		}                                //(i<=2*n+1)
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
			a++;
		}
		nsp+=2;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",a);
			a++;
		}
		nst--;
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
int main()
{                                              
	int n;
	scanf("%d",&n);                             //ABCDEFG
	int nsp=1;                                 // ABC EFG
	int nst=n;                                //  AB   FG
	for(int i=1;i<=2*n+1;i++)                 //  A     G
	{
		char ch=(char)64;
		printf("%c",ch+i);
		
	}
	
	printf("\n");
	for(int i=1;i<=n;i++)
	{
		char ch=65;     
		for(int j=1;j<=nst;j++)
		{
			printf("%c",ch);
			ch++;//nsp=1 & new loop forthe stright starline
		}                                //(i<=2*n+1)
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
			ch++;
		}
		nsp+=2;
		for(int j=1;j<=nst;j++)
		{
			printf("%c",ch);
			ch++;
		}
		nst--;
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>                          //samecode but slove by myself
int main()
{
	int n;
	scanf("%d",&n);                             //1234567
	int nsp=1;                                 // 123 567
	int nst=n;                                //  12   67
	for(int i=1;i<=2*n+1;i++)                 //  1     7
	{
		printf("%d",i);
	}
	printf("\n");                                
	for(int i=1;i<=n;i++)                       
	{
		int a=1;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",a);
			a++;//nsp=1 & new loop forthe stright starline
		}                                //(i<=2*n+1)
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
			a++;
		}
		nsp+=2;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",a);
			a++;
		}
		nst--;
		printf("\n");
	}
	return 0;
}*/




/*#include<stdio.h>
int main()
{                                                   //44444
	int n;                                      //43334
	scanf("%d",&n);                            // 43234
	int min=0;                                  //43334
	for(int i=1;i<=2*n-1;i++)                   //44444
	{
		for(int j=1;j<=2*n-1;j++)
		{
			int a=i;
			if(a>n) a=2*n-i;
			int b=j;
			if(b>n) b=2*n-j;
			if(a<b) min=a;
			else min=b;
			printf("%d",n+1-min);
		}
		printf("\n");
	}
	return 0;
}*/


			
/*#include<stdio.h>
int main()
{                                                   //11111
	int n;                                      //12221
	scanf("%d",&n);                            // 12321
	int min=0;                                  //12221
	for(int i=1;i<=2*n-1;i++)                   //11111
	{
		for(int j=1;j<=2*n-1;j++)
		{
			int a=i;
			if(a>n) a=2*n-i;
			int b=j;
			if(b>n) b=2*n-j;
			if(a<b) min=a;
			else min=b;
			printf("%d",min);
		}
		printf("\n");
	}
	return 0;
}*/
						

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);                             //1234321
	int nsp=0;                                 // 123 321
	int nst=n;                                  //12   21
	for(int i=1;i<=n;i++)                       //1     1
	{
		int a=n/2+1;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",j);
		}
			//nsp=1 & new loop forthe stright star 		 
		nst--;                            //(i<=2*n+1)
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
			a--;
		}
		
		for(int j=1;j<=n;j++)
		{
			printf("%d",a);
			a--;
		}
		nsp+=2;
		printf("\n");
	}
	return 0;
}
