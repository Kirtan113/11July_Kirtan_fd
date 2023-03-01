/*WAP to show 
1. Monday to Sunday using switch case
2. Vowel or Consonant using switch case */

#include<stdio.h>
void main()
{
    int day;
    printf("Enter day number 1 to 7:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            day == 1;
            printf("Monday",day);
            break;

        case 2:
            day == 2;
            printf("Tuesday",day);
            break;

        case 3:
            day == 3;
            printf("Wednesday",day);
            break;

        case 4:
            day == 4;
            printf("Thursday",day);
            break;

        case 5:
            day == 5;
            printf("Friday",day);
            break;

        case 6:
            day == 6;
            printf("Saturday",day);
            break;

        case 7:
            day == 7;
            printf("Sunday",day);
            break;

        default:
            printf("Invalid Input! Please enter day number between 1 to 7.");
            break;
    }
}






/*(using Else...if)
#include <stdio.h>
int main()
{
    int day;
    printf("Enter day number 1 to 7:");
    scanf("%d",&day);
    
    if(day == 1)
    {
        printf("Monday");
    }
    else if(day == 2)
    {
        printf("Tuesday");
    }
    else if(day == 3)
    {
        printf("Wednesday");
    }
    else if(day == 4)
    {
        printf("Thursday");
    }
    else if(day== 5)
    {
        printf("Friday");
    }
    else if(day == 6)
    {
        printf("Saturday");
    }
    else if(day == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter day number between 1 to 7.");
    }
}
*/