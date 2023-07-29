#include<stdio.h>
int main()
{
	int a,bonus;
	printf("ENter a=");
	scanf("%d",&a);
	
	if(a>3000)
	{
		printf("Bonus 300");
	}
	else if(a>1600 && a<=3000)
	{		
		bonus=(a*10)/100;
		if(bonus>240)
		{
			printf("bonus 240");
		}
		else
		{
			printf("bonus= %d",bonus);
		}
	}
	else if(a<=1600)
	{
		bonus=(a*15)/100;
		if(bonus<100)
		{
			printf("bonus 100");
		}
		else
		{
			printf("bonus= %d",bonus);
		}
	}
	else
	{
		printf("invalid");
	}	
	return 0;
}

	
