/*WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo)*/
#include<stdio.h>
void main()
{
    int expression;
    int a, b;
    int ans;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Divistion\n5.Modulo\n");
    printf("Enter your choice:");
    scanf("%d",&expression);
    switch (expression)
    {
        case 1:
            ans = a + b;
            printf("\nAddition of a and b is:%d", ans);
            break;
        case 2:
            ans = a - b;
            printf("\nSubstraction is:%d", ans);
            break;
        case 3:
            ans = a * b;
            printf("\nMultiplcation is:%d", ans);
            break;
        case 4:
            ans = a /b;
            printf("\nDivistion is:%d", ans);
            break;
        case 5:
            ans = a % b;
            printf("\nModulois:%d", ans);
            break;
        default: 
            printf("Enter the valid choice.......");
            break;
    }
}