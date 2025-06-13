#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d""%d",&a,&b);
    b=a;
    a=a-b;
    b=a+b;
    printf("After Swaping a=%d and b=%d",a,b);
    return 0;
}