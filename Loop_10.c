#include<stdio.h>
int main(){
    int x,y,i,sum=0;
    printf("Enter First number :");
    scanf("%d",&x);
    printf("Enter Second number:");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
     sum=sum+i;
        printf("%d",sum);
    return 0;
}