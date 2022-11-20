#include<stdio.h>
#include<math.h>
int main()
{
    float d,x1,x2,r,img,a,b,c;
    printf("Enter the coefficients of a,b & c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(a==0)
    {
        printf("invalid");
    }
    else if(d==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("Roots are equal and x1 is %2f",x1);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("%2f & %2f",x1,x2);
    }
    else if(d<0)
    {
        r=-b/(2*a);
        img=(sqrt(-d))/(2*a);
        printf("%2f+%2fi",r,img);
        printf("%2f-%2fi",r,img);
    }
}
