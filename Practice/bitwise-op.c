//Bitwise operator
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Bitwise operator\n AND is:%d\n",a&b);
    printf("OR is:%d\n",a|b);
    printf("COMPLIMENT is:%d\n",~a);
    printf("XOR is:%d\n",a^b);
    printf("SHIFT RIGHT is:%d\n",a>>1);
    printf("LEFT RIGHT is:%d\n",b<<2);
}