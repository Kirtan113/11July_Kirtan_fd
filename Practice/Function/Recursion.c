#include<stdio.h>
long int factorial( long int no)
{
    if (no <= 1)
    {
       return 1;
    }
    return no* factorial(no-1);     
}
int main()
{
    long int no;
    printf("Enter the no that you want to factorial:");
    scanf("%ld",&no);
    printf("%ld",factorial(no));
}