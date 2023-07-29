#include<stdio.h>      //last page

int main()
{
    int a, b, c;
    printf("Enter a= ");
    scanf("%d", &a);
    printf("Enter b= ");
    scanf("%d", &b);
    printf("Enter c= ");
    scanf("%d", &c);
    
    if (a + b + c == 180) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    
    return 0;
}
