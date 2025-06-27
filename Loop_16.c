#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=100;i<=200;i++){
    if(i%2==0)
     sum=sum+i;
    }
    printf("Sum of even number:%d",sum);
    return 0;
}