#include<stdio.h>
int main(){
	int attendence,days,ap;
	printf("Enter the number of days students present: ");
	scanf("%d",&days);
	printf("Enter the total attendence: ");
	scanf("%d",&attendence);
	ap=((attendence*100)/days);
	int p=(_75percent);
	if (ap>=p){
		printf("allowed to sit in class");
	}
	else{
		printf("not Allowed to sit in class");
	}
	return 0;
}                

