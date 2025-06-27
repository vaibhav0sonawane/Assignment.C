#include<stdio.h>
int main(){
    int x,y,i;
    printf("Enter First number :");
    scanf("%d",&x);
    printf("Enter Second number:");
    scanf("%d",&y);
    for(i=x;i<=y;i++){
        if(i%2==0)
        printf("even number:%d\n",i);
    }
    return 0;
}