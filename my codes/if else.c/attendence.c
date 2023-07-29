#include<stdio.h>
int main()
{
	float classes_attended,classes_held,ap;
	printf("Enter the number of classes held: ");
	scanf("%f",&classes_held);
	printf("Enter the number of classes attended: ");
	scanf("%f",&classes_attended);
	ap=(classes_attended/classes_held)*100;
	if (ap>=75)
	{
		printf("allowed to sit in class");
	}
	else
	{
		printf("not Allowed to sit in class");
	}
	return 0;
}                

