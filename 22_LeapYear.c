#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%4==0)
    printf("It is a Leap year");
    else
    printf("not a leap year");
    return 0;
}