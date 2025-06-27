#include<stdio.h>
int main(){
    int i;
    printf("Even number from 100 to 150");
    for(i=100;i<=150;i++){
    if(i%2==0)
    printf("\nEven number:%d",i);
    }
    return 0;
}