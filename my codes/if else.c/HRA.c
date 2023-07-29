#include<stdio.h>
int main(){
	int BS,HRA,DA;
	printf("Enter basic salary: ");
	scanf("%d",&BS);
	printf("Enter HRA: ");
	scanf("%d",&HRA);
	printf("Enter DA: ");
	scanf("%d",&DA);
	int gs = (BS + HRA + DA);
	if(BS<=10000){
		printf("Gross salary: %d",gs);
	}
	else if(BS<=20000){
		printf("Gross salary: %d",gs);
	}
	else if(BS> 20000){
		printf("Gross salary: %d",gs);
	}
	return 0;
}
	
	 
	
