/*#include<stdio.h>
int main (){
	int sp,cp;
	printf("Enter the selling price: ");
	scanf("%d",&sp);
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	int profit = sp-cp;
	int percentage = (profit*100)/cp;
	if (sp>cp){
		printf("%d\n",percentage);
	}
	if(sp==cp){
		printf("No profit no loss");
	}
	else{
		printf("invalied");
	}
	return 0;
}*/

	
#include<stdio.h>
int main (){
	int sp,cp;
	printf("Enter the selling price: ");
	scanf("%d",&sp);
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	if (sp>cp){
		printf("profit");
	}
	else if(cp>sp){
		printf("loss");
	}
	else{
		printf("No profit no loss");
	}
	return 0;
}

	
