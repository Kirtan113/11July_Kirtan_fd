#include<stdio.h>
void data(int a, int b)
{
    printf("Enter the value of a is:%d and  b is:%d", a, b);
}
int main()
{
    int a, b;
    printf("\nEnter the value of a and b:");
    scanf("%d%d",&a, &b);
    data(a, b);
    return 0;
}