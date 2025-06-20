#include<stdio.h>
int main(){
    int roll_no;
    char name[100],s1[100],s2[100],s3[100];
    float m1,m2,m3,m4,total,avg;
    char grade;
   printf("Enter student details:\n");
   printf("roll no.s:");
   scanf("%d",&roll_no);
   printf("name:");
   scanf("%s",&name);
   printf("subject 1:");
   scanf("%s",&s1);
   printf("subject 2:");
   scanf("%s",&s2);
   printf("subject 3:");
   scanf("%s",&s3);
   printf("marks 1:");
   scanf("%f",&m1);
   printf("marks 2:");
   scanf("%f",&m2);
   printf("marks 3:");
   scanf("%f",&m3);
   total=m1+m2+m3;
   avg=total/3;
   if(avg<=100 && avg>=90)
    printf("Class=1");
   else if(avg<90 && avg>=60)
     printf("Class=2");
   else if(avg<60 && avg>=35)
     printf("Class=3") ;
   else
     printf("Class =fail");
     return 0;
}