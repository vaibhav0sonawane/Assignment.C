#include<stdio.h>
int main(){
    int x,y,i;
    printf("Enter First number :");
    scanf("%d",&x);
    printf("Enter Second number:");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
        printf("\n%d",i);
    return 0;
}