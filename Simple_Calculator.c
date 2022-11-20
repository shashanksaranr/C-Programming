#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("Enter the expression in the form a+b\n");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':   c=a+b;
                    printf("c=%d",c);
                    break;

        case '-':   c=a-b;
                    printf("c=%d",c);
                    break;

        case '*':   c=a*b;
                    printf("c=%d",c);
                    break;

        case '/':   c=a/b;
                    printf("c=%d",c);
                    break;

        case '%':   c=a%b;
                    printf("c=%d",c);
                    break;

        default: printf("invalid operator");
    
    }
}