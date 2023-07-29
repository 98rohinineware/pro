#include<stdio.h>
int main()
{
	float time,pi,length,gravity;
	printf("Enter time: ");
	scanf("%f",&time);
	printf("Enter length: ");
	scanf("%f",&length);
	pi=3.14;
	gravity= (4*pi*pi*length)/(time*time);
	printf("gravity is: %f",gravity);
	return 0;
}
	
		
