//Logical operator
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter values of x and y:");
    scanf("%d%d",&x,&y);

    printf("The value of this logical AND(&&) operator ((x==y) && (x<y)) is: %d \n",
         ((x == y) && (x < y)));
   
    printf("The value of this logical OR(||) operator ((x==y) || (x<y)) is: %d \n",
        ((x == y) || (x < y)));
   
    printf("The value of this logical NOT(!=) operator (!(x==y)) is: %d ",
         (!(x == y)));
}