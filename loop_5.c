#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("\n%d",i);
    return 0;
}