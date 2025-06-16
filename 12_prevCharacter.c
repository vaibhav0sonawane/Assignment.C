#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    char p_char=ch-1;
    printf("previous character:%c",p_char);
    return 0;
}