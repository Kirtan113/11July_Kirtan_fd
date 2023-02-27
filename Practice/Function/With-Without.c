#include<stdio.h>
int no;
int getdata()
{
    printf("\nEnter te value of no:");
    scanf("%d", &no);
    return 0;
}
int print()
{
    return no;
}
int main()
{
    getdata();
    printf("%d",print());
}