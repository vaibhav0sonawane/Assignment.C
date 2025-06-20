#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%5==0 && num%7==0)
    printf("number is divisible by 5 & 7");
    else
    printf("num is not divisible by 5 & 7");
    return 0;
}