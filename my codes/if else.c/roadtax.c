#include<stdio.h>
int main(){
	int cp,rtax;
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	if(cp>100000){
		printf("road tax= %d",(100000*15)/100);
	}
	else if(cp>50000 && cp<=100000){
		printf("road tax= %d",(100000*10)/100);
	}
	else if(cp<=50000){
		printf("road tax= %d",(50000*5)/100);
	}
	return 0;
}
