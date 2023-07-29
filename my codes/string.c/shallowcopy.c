/*#include<stdio.h>
int main()
{
	char s1[]="rohini";           //shallow copy only single charector can change
	char *s2=s1;
	s1[0]='p';
	printf("%s",s2);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	char s1[]="rohini";                  //copy whole strings
	char s2[]="mohini";
	s2[0]='l';
	printf("%p\n",s1);
	printf("%p",s2);
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>                                 //strlen
int main()
{
	char*str="rohini sunil neware";
	int x=strlen(str);
	printf("%d",x);
	return 0;
}*/



/*#include<stdio.h>                                    //strcpy
#include<string.h>
int main()
{
	char str[115]="rohini neware";
	char str1[15];
	strcpy(str1,str);
	//str1[0]='l';
	printf("%s",str1);
	return 0;
}*/


/*#include<stdio.h>                                    //strcat
#include<string.h>
int main()
{
	char str[]="rohini";
	char str1[]="neware";
	strcat(str,str1);
	//str1[0]='l';
	printf("%s",str);
	return 0;
}*/


/*#include<stdio.h>                                  //add new one in middle index
#include<string.h>
int main()
{
	char str[20]="rohini";
	printf("%s\n",str);
//2nd index per m
	for(int i=6;i>=2;i--)
	{
		str[i+1]=str[i];
	}
	str[2]='m';
	printf("%s",str);
	return 0;
}*/
	
