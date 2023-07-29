/*#include<stdio.h>
int main()
{
	int a=sizeof(double);
	printf("%d bytes",a);
	return 0;
}*/

#include<stdio.h>
int main()
{
	printf("Date: %s\n",_DATE_);
	printf("Time: %s\n",_TIME_);
	return 0;
}
