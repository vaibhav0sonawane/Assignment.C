#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides of triangle:");
    scanf("%d""%d""%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    printf("the triangle exist");
    else
    printf("the triangle does not exist");
    return 0;
}