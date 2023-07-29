#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n%5==0 && n%11==0){
		printf("%d %d",5,11)
	}
	else if(n%5==0){
		printf("%d",5);
	}
	else if(n%11==0){
		printf("%d",11);
	}
	else{
		printf("none");
	}
	return 0;
}


