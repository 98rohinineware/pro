#include<stdio.h>
int main(){
	int h;
	printf("Enter the height_in inches= ");
	scanf("%d",&h);
	float inches=60;
	float feet=5;
	if(h>=60){
		printf("Allowed to ride");
	}
	else{
		printf("Not allowed to ride");
	}
	return 0;
}
