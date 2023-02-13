#include<stdio.h>
void main()
{
    int expression;
    int expression2;
    printf("\n1.Tea\n2.Coffee\n");
    printf("\nEnter your choice:");
    scanf("%d",&expression);
    switch (expression)
    {
    case 1:
    printf("\nYour choice is tea.");    
    break;
    
    case 2:
    printf("\n1.Hot coffe\n2.cold coffe");
    printf("\nEnter your choice:");
    scanf("%d",&expression2);
    
    switch (expression2)
    {
    case 1:
    printf("\nyour choice is Hot coffee.");
    break;

    case 2:
    printf("\nyour choice is cold coffe.");
    break;

    default:
    printf("\nEnter valid choice......");
    break;
    }
    break;
    default:
    printf("\nEnter valid choice......");
    break;
    }
}