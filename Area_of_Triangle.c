#include<stdio.h>

float area(float b,float h)
{
    float a;
    a=(0.5)*b*h;
    return a;
}

int main()
{
    float b,h;
    printf("Enter the base & height of a rectangle triangle\n");
    scanf("%f%f",&b,&h);
    printf("Area of a rectangle triangle is %f\n",area(b,h));
    return 0;
}

