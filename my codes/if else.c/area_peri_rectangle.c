#include<stdio.h>
int main (){
	int l,b;
	printf("Enter the length: ");
	scanf("%d",&l);
	printf("Enter the breath: ");
	scanf("%d",&b);
	int a=(l*b);//area of rectangle
	int p=2*(l+b);//perimeter
	if (a>p){
		printf("area is greater than perimeter ");
	}
	else{
		printf("area is not greater than perimeter ");
	}
	return 0;
}
	
	
