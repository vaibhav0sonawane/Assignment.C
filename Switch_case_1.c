#include<stdio.h>
int main(){
    int num;
    char ch;
    printf("enter a single digit(0-9):");
    scanf("%d",&num);
    switch(num){
        case 0:
        printf("zero");
        break;
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        default:
        printf("invalid number");
    }
    return 0;
}