#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("number is divisible by 5");
        if(num%7==0)
        {
            printf("\nnumber is divisible by 7");
        }
        else
        printf("\nnumber is not divisible by 7");
    }
    else
    printf("\nnumber is not divisible by 5");
    return 0;   
}