#include<stdio.h>
int main(){
    float bs,tax,ts;
    // bs=basic salary,ts=total salary
    printf("Enter basic salary");
    scanf("%f",&bs);
    if(bs>300000)
        tax=30;
    else if(bs>150000 && bs<300000)
        tax=20;
    else 
       tax=0;
    ts=bs-((bs*tax)/100);
    printf("annual salary %f",ts);
    return 0;
}