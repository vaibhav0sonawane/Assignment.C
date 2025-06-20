#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d""%d""%d",&a,&b,&c);

    // optimization

    // b=(a>b)?a:b;
    // b=(c>b)?c:b;
    // printf("max number is %d",b);

    // if else logic

    // if(a>=b &&a>=c)
    // printf("%d is max",a);
    // else if(b>=a && b>=c)
    // printf("%d is max",b);
    // else
    // printf("%d is max",c);

    // using header tag 
    printf("max is %.2f",fmax(a,fmax(b,c)));
    return 0;
}