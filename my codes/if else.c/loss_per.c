#include<stdio.h>
int main (){
	int sp,cp;
	printf("Enter the selling price: ");
	scanf("%d",&sp);
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	int loss=cp-sp;
	int percentage=(loss*100)/cp;
	if (cp>sp){
		printf("%d\n",percentage);
	}
	if(sp==cp){
		printf("No profit no loss");
	}
	else{
		printf("invalid");
	}
	return 0;
}
