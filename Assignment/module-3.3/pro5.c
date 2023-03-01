/*
WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice 
*/
#include <stdio.h>
void main()
{
    int a[100];
    int size;
    int i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i] > a[j])
            //if(a[i] < a[j])----> only one change for decending order.
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
}

