/*Take users current year age Find users previous year age and next year age 
For ex. If users give his 2023 year age 
Then give 2022 year and 2024 year age 
Using unary operator*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter your current year age:");
    scanf("%d",&a);
    printf("\nYour current year age is:%d",a);

    b = ++a;
    printf("\nYour next year age is:%d",b);

    c = --a;
    c = --a;
    printf("\nYour previous year age is:%d",c);   
}