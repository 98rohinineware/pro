#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter day= ");
	scanf("%d",&d);
	printf("Enter month= ");
	scanf("%d",&m);
	printf("Enter year= ");
	scanf("%d",&y);
	if(y>0)
	{
		if(m>=1 && m<=12)
		{
			if(d>=1 && d<=31)
			{
				printf("given year is valid");
			}
			else
			{
				printf("invalid");
			}
		}
		else
		 {
			printf("invalid");
		 }
	}
	else
	 {
		printf("invalid");
	 }
	return 0;
}
