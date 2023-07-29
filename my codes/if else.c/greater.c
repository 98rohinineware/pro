#include<stdio.h>
int main (){
	int a,b,c;
	printf("Enter the a: ");
	scanf("%d",&a);
	printf("Enter the b: ");
	scanf("%d",&b);
	printf("Enter the c: ");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d\n",a);
		}
		else{
			printf("%d\n",c);
		}
	}
	if(b>c){
		printf("%d\n",b);
	}
	else{
		printf("%d\n",c);
	}
	return 0;
}
