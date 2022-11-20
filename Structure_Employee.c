#include<stdio.h>
struct emp
{
    int id;
    char name[50];
    float salary;
    int age;
}emp[50];

 void read_employee_details(int n)
 {
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the details of employee %d\n",i+1);
        
        printf("Enter the id\n");
        scanf("%d",&emp[i].id); 
        
        printf("Enter the name\n");
        scanf("%s",emp[i].name);

        printf("Enter the salary\n");
        scanf("%f",&emp[i].salary);

        printf("Enter the age\n");
        scanf("%d",&emp[i].age);
    }
 }


 int main()
 {
    int n;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    read_employee_details(n);
    return 0;
 }