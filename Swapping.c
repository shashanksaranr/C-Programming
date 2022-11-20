#include <stdio.h>
void swap(int *x,int *y) 
{
   int c;
   c=*x; 
   *x=*y;    
   *y=c; 
   return;
}

int main ()
{
   int a=10;
   int b=20;
   printf("Before swap the value of a is %d\n",a);
   printf("Before swap the value of b is %d\n",b);
   swap(&a,&b);
   printf("After swap the value of a is %d\n",a);
   printf("After swap the value of b is %d\n",b);
   return 0;
}