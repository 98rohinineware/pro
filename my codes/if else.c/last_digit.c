#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int d=n%10;
	printf("last digit of number is: %d",d);
	return 0;
}
