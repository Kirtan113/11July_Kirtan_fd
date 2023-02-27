#include<stdio.h>
struct Structure
{
    int id;
    char nm[20];  
};
int main()
{
    struct Structure  obj[20];
    int i;
    for(i = 0; i < 3; i++)
    {    
        printf("Enter your id:");
        scanf("%d",&obj[i].id);
        printf("Enter your name:");
        scanf("%s",&obj[i].nm);
    }
    for(i = 0; i < 3; i++)
    {
        printf("\nYour id is:%d and your name is:%s", obj[i].id, obj[i].nm);
    }
}