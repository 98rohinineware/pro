#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a= ");
	scanf("%d",&a);
	printf("Enter b= ");
	scanf("%d",&b);
	printf("Enter c= ");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("a is greater= %d",a);
	}
	else if(b>c && b>a){
		printf("b is greater= %d",b);
	}
	else if(c>a && c>b){
		printf("c is greater= %d",c);
	}
	return 0;
}
