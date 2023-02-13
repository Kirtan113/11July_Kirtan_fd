#include<stdio.h>
void main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            goto lable;
        }
        printf("\n%d",i);
    }
    lable:
        printf("\nThis is goto statment.");
}