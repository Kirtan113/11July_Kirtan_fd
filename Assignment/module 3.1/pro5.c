/*
WAP to check if the given year is a leap year or not.
*/
#include <stdio.h>
void main()
{    
    int year;      
    printf("Enter any year:\n");
    scanf("%d", &year);
          
    if (year%4 == 0)      
    printf("This is leap year");  
        
    else      
    printf("This is not leap year");      
}    
