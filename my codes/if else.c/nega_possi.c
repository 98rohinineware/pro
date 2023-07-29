/*#include<stdio.h>
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n>0){
		printf("NUMBER IS POSITIVE");
	}
	else if(n==0){
		printf("NUMBER IS ZERO");
	}
	else{
		printf("NUMBER IS NEGATIVE");
	}
	return 0;
}*/


#include<stdio.h>
#include <string.h>
int main(){
	char city;
	char agra;
	char jaipur;
	char delhi;
	printf("Enter the city name: ");
	scanf("%s",&city);
	strcmp(city==delhi){
		printf("%s","RED FORT");
	}
	else if(city==agra){
		printf("%s","TAJ MAHAL");
	}
	else if(city==jaipur){
		printf("%s","JAL MAHAL");
	}
	else{
		printf("invalid");
	}
	return 0;
}


