#include<stdio.h>
struct stu
{
 char sname[50];
 int rollno;
 int marks;
 }sturec[50];
void read_student_details(int n)
{
 int i;
 for(i=0;i<n;i++)
 {
 printf("Enter the details of student %d\n",i+1);
 printf("Enter the name\n");
 scanf("%s",sturec[i].sname);
 printf("Enter the rollnumber\n");
 scanf("%d",&sturec[i].rollno);
 printf("Enter the marks\n");
 scanf("%d",&sturec[i].marks);
 }
}
void find_above_below_avg(int n)
{
 int i,ab=0,bl=0;
 float ca;
 for(i=0;i<n;i++)
 {
 ca=ca+sturec[i].marks;
 }
 ca=ca/n; 
 for(i=0;i<n;i++)
 {
 if(sturec[i].marks>=ca)
 ab++;
 else 
 bl++;
 }
 
 printf("Number of students who have above average is %d\n",ab);
 printf("Number of students who have below average is %d\n",bl);
}
int main()
{
 int n;
 printf("Enter the number of students\n");
 scanf("%d",&n);
 read_student_details(n);
 find_above_below_avg(n);
 return 0;
}
