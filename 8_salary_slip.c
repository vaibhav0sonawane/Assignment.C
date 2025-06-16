#include <stdio.h>
int main()
{
    float id,bs,da=0.3,hra=0.1,tax=0.05,totalsalary;
    char ename;
    int eid;
    printf("Enter employee ID:");
    scanf("%s", &ename);
    printf("Enter employee name:");
    scanf("%s", &ename);
    printf("\nEnter employee base salary:");
    scanf("%f",&bs);
    totalsalary=bs+((bs*(da+hra-tax))/100);
    // here 30=da,10=hra,5=tax;
    printf("total salary of employee is:%f",totalsalary);
    return 0;
}
    
