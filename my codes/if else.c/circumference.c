#include<stdio.h>
int main()
{
	 int radius;
	 printf("Enter radius: ");
	 scanf("%d",&radius);
	 int diameter=(2*radius);
	 int circumference=(2*3.14*radius);
	 printf("Diameter of circle is=  %d\n",diameter);
	 printf("circumference of circle is= %d",circumference);
	 return 0;
} 
