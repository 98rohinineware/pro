#include<stdio.h>
int main(){
	int mn;
	printf("Enter the month number: ");
	scanf("%d",&mn);
	if(mn == 1){
		printf("days in this months: %s","31");
	}
	else if(mn == 3){
		printf("days in this months: %s","31");
	}
	else if(mn == 5){
		printf("days in this months: %s","31");
	}
	else if(mn == 7){
		printf("days in this months: %s","31");
	}
	else if(mn == 8){
		printf("days in this months: %s","31");
	}
	else if(mn == 10){
		printf("days in this months: %s","31");
	}
	else if(mn == 12){
		printf("days in this months: %s","31");
	}
	else if(mn == 4){
		printf("days in this months: %s","30");
	}
	else if(mn == 6){
		printf("days in this months: %s","30");
	}
	else if(mn == 9){
		printf("days in this months: %s","30");
	}
	else if(mn == 11){
		printf("days in this months: %s","30");
	}
	else if(mn == 2){
		printf("days in this months: %s %s","28","29");
	}
	else{
		printf("invalid");
	}
	return 0;
}
