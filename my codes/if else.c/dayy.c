#include<stdio.h>
int main(){
	int days;
	printf("Enter the number of days: ");
	scanf("%d",&days);
	if(days==0){
		printf("Monday");
	}
	else if(days==1){
		printf("Tuesday");
	}
	else if(days==2){
		printf("Wednesday");
	}
	else if(days==3){
		printf("Thursday");
	}
	else if(days==4){
		printf("friday");
	}
	else if(days==5){
		printf("saturday");
	}
	else{
		printf("sunday");
	}
	return 0;
}
								
						
			
