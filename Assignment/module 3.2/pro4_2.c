/*2. Vowel or Consonant using switch case*/
/*#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any one alphabet:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 1:
        ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
        printf("\n this is vowel.",ch);   
        break;

    case 2:
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
        printf("\n this is vowel.",ch);   
        break;

    default:
        printf("\n this is consonant.",ch);
        break;
    }
}
*/








//(Using Ef...else)
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any one alphabet:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\n%c is vowel.",ch);
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n%c is vowel.",ch);
    }
    else
    {
        printf("\n%c is consonant.",ch);
    }
}
