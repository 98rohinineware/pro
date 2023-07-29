#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n<10){
		printf("The number is one digit number");
	}
	else if(n<100){
		printf("The number is two digit number");
	}
	else if(n<1000){
		printf("The number is three digit number");
	}
	else{
		printf("number is more than three digit");
	}
	return 0;
}
