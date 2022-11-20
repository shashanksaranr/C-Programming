#include<stdio.h>
#include<string.h>
 
void main()
{
    char s[50];
    int a=0,i;
 
    printf("Enter the string:\n");
    scanf("%s",s);
    for (i=0;i<50;i++)
    {
        if (s[i]=='g')
        {
            a+=1;
        }   
    }
    printf("Number of word g in given string are %d\n",a);
}