#include<stdio.h>
int main(){
	int av,tm;
	printf("Enter the average marks: ");
	scanf("%d",&av);
	printf("Enter the total marks: ");
	scanf("%d",&tm);
	float pc=(av*100)/tm;
	printf("percentage is : %f",pc);
	return 0;
}
