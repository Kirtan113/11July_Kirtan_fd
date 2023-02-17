#include<stdio.h>
void main()
{
    int i;
    // int array[5] = {1,2,3,4,5};    
    int array[3];
    for (i = 0; i < 3;i++)
    {
        printf("\nEnter the value of array[%d]:",i);
        scanf("%d",&array[i]);
    }
    
    // printf("\nValue of no is:%d",array[3]);
    for (i = 0; i < 3; i++)
    {
        printf("\nValue of array[%d] is:%d", i, array[i]);
    }
    
}