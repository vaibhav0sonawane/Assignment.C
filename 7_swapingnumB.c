// Accept two integers from the user and interchange them. Display the 
// interchanged numbers. Using temporary variable Without using temporary 
//  variable 
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d""%d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
    printf("After Swaping a=%d and b=%d",a,b);
    return 0;
}