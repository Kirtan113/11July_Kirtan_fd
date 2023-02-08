//use pointer
#include<stdio.h>
void main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The address of a is:%d\n",&a);
    printf("The address of a is:%d\n",ptr);
    printf("value of a is:%d",*ptr);
}