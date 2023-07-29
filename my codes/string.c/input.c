/*#include<stdio.h>
#include<string.h>
int main()
{                                         //this is new to input
	char str[40];
	scanf("%[^\n]s",str);
	printf("%s",str);
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];                //this using gets for taking full input
	gets(str);
	printf("%s",str);
	return 0;
}*/

/*#include<stdio.h>                                
#include<string.h>
int main()
{
	char str[40];
	scanf("%s",str);      //this line only print one word
	printf("%s",str);
	return 0;
}*/


/*#include<stdio.h>
int main()
{
	char str[49];
	puts("Enter the string: ");               //reverse string
	scanf("%[^\n]s",str);
	int size=0;
	int m=0;
	while(str[m]!='\0')
	{
		size++;
		m++;
	}
	for(int i=0,j=size-1;i<=j;i++,j--)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	puts("reverse string is: ");
	printf("%s",str);
	return 0; 
} */


/*#include<stdio.h>
int main()
{
	char str[49];
	puts("Enter the string: ");
	scanf("%[^\n]s",str);                             //size of string
	puts("Size of the string: ");
	int size=0;
	int m=0;
	while(str[m]!='\0')
	{
		size++;
		m++;
	}
	printf("%d",size);
	return 0;
}*/


/*#include<stdio.h>                          //string as pointer[charector array]
int main()
{
	char str[]="rohini sunil neware";
	char *ptr=str;
	int i=0;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
		i++;
	}
	return 0;
}*/
