//Assignment  operator
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter value of a and b:\n");
    scanf("%f %f",&a,&b);
    a+=b;
    printf("addition is:%f\n",a);

    printf("Enter value of a and b:\n");
    scanf("%f %f",&a,&b);
    a-=b;
    printf("subtraction is:%f\n",a);

    printf("Enter value of a and b:\n");
    scanf("%f %f",&a,&b);
    a*=b;
    printf("Multiplication is:%f\n",a);

    printf("Enter value of a and b:\n");
    scanf("%f %f",&a,&b);
    a-=b;
    printf("division is:%f\n",a);
}