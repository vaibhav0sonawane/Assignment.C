#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>=0)
    printf("number is positive");
    else
    printf("number is negative");
    return 0;
}