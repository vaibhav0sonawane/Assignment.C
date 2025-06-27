#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        if(i%2==0)
        sum=sum+i;
    }
    printf("sum of Even number:%d\n",sum);
    return 0;
}