#include<stdio.h>
int main(){
	int marks,phy,che,bio,math,com,tm,om;
	printf("marks of subjects phy,che,bio,math,com: ");
	scanf("%d%d%d%d%d",&phy,&che,&bio,&math,&com);
	om=(phy+che+bio+math+com);
	tm=500;
	float p=(om*100)/tm;
	
	if(p>=90){
		printf("Grade A");
	}
	else if(p>=80){
		printf("Grade B");
	}
	else if(p>=70){
		printf("Grade C");
	}
	else if(p>=60){
		printf("Grade D");
	}
	else if(p>=40){
		printf("Grade E");
	}
	else if(p<40){
		printf("Grade f");
	}
	return 0;
}
