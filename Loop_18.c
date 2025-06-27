#include<stdio.h>
int main(){
    int x,y,i,sum=0;
    printf("Enter First number :");
    scanf("%d",&x);
    printf("Enter Second number:");
    scanf("%d",&y);
    for(i=x;i<=y;i++){
        if(i%2==0)
        sum=sum+i;
    }
     printf("Sum of Even number:%d\n",sum);
    return 0;
}