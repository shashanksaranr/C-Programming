#include<stdio.h>
#include<math.h>
int main()
{
    float num,den,term,deg,x;
    int i;
    printf("Enter degree and number\n");
    scanf("%f",&deg);
    x=deg;
    x=x*(3.142/180);
    num=x;
    den=1;
    term=num/den;
    for(i=3;i<21;i=i+2)
        {
            num=num*(-x*x);
            den=den*(i-1)*(i);
            term=term+(num/den);
        }
    printf("sin(%.2f)=%.2f without using built-in function\n",deg,term);
    printf("sin(%.2f)=%.2f using built-in function\n",deg,sin(x));
    return 0;
}