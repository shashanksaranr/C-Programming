#include<stdio.h>
int main()
{
    int a[50],i,j,n,t;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements to be sorted\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted Elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}