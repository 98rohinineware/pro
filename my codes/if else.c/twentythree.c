#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n%3==0){
		printf("It is ends with 3");
	}else if(n%7==0){
		printf("It is ends with 7");
	}else{
		printf("Itself");
	}
	return 0;
}
