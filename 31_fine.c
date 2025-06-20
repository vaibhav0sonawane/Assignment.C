#include<stdio.h>
int main(){
    int num;
    printf("No.s of Days member is late:");
    scanf("%d",&num);
    if(num>10)
    printf("fine=100 rupees");
    else if(num>6 && num<=10)
    printf("fine=80 rupees");
    else if(num<5)
    printf("fine=50 rupees");
    else
    printf("no fine");
    return 0;
}