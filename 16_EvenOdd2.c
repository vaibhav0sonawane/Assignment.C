#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    (num%2==0)?printf("no.s is even"):printf("no.s is odd");
    return 0;
}