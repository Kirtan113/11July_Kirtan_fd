#include<stdio.h>
union Union
{
    int id;
    char nm[20];  
}un;
int main()
{
    printf("Enter your id:");
    scanf("%d",&un.id);
    printf("Enter your name:");
    scanf("%s",&un.nm);
    printf("\nYour id is:%d and your name is:%s", un.id, un.nm);
}
