#include <stdio.h>
int main()
{
    float id,bs,hra=10,da=30,tax=5,totalsalary;
    // bs=base salary,hr=house rent,
    // da=dearness allowance,ts=total in hand salary
    char ename;
    int eid;
    printf("Enter employee ID:");
    scanf("%s", &ename);
    printf("Enter employee name:");
    scanf("%s", &ename);
    printf("\nEnter employee base salary:");
    scanf("%f",&bs);
    totalsalary=bs+(bs*(da+hra-tax)/100);
    printf("total salary of employee is:%f",&totalsalary);
    return 0;
}
    
