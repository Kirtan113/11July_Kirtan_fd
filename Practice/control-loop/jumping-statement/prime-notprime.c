#include<stdio.h>
void main()
{
    int no, i, flag = 0;
    printf("Enter the no that you want to check wether it's prime or not:");
    scanf("%d",&no);
    for (i = 2; i < no; i++)
    {
        if (no%i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
    prime:
        if (no == 1)
        {
            printf("\nNo is 1.");
        }
        else if (flag == 0)
        {
            printf("\n%d is prime no.",no);
        }
        else{
            printf("\n%d is not prime no.",no);
        }
}