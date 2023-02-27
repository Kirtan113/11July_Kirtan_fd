#include<stdio.h>
float* reference(float *ptr)
{
    return ptr;
}
int main()
{
    float a = 100;
    // ptr = &a;
    printf("%f",reference(&a));
}