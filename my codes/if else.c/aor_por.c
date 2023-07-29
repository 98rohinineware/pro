#include<stdio.h>
int main(){
	int l,b;
	printf("Enter the length: ");
	scanf("%d",&l);
	printf("Enter the breath: ");
	scanf("%d",&b);
	int aor=(l*b);
	int por=(2*l)+(2*b);
	if(aor>por){
		printf("area of rectangle is greater");
	}
	else if(aor==por){
		printf("area and perimeter are equal");
	}
	else{
		printf("perimerter of rectangle is greater");
	}
	return 0;
}
	
