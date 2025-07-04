#include<stdio.h>
int main(){
    int x,y,opt,quo,rem,temp,diff;
   printf("enter value of x and y:");
   scanf("%d""%d",&x,&y);
   printf("Choice the Opration:");
   printf("1.Equality");
   printf("2.Less Than");
   printf("3.Quotient and remainder");
   printf("4.Range");
   printf("5.Swap:");
   scanf("%d",&opt);
   switch(opt){
    case 1:
    if(x==y)
    printf("x=y");
    else
    printf("not equal");
    break;
    case 2:
    if(x<y)
    printf("x<y");
    else
    printf("x is not less then y");
    break;
    case 3:
    printf("x/y:%d",x/y);
    printf("x%y:%d",x%y);
    break;
    case 4:
    if(x>y)
      {
        diff=x-y;
      printf("difference btw x and y is:%d",diff);
      }
      else
      diff=y-x;
    printf("difference btw y and x is:%d",diff);
    break;
    case 5:
     temp=x;
     x=y;
     y=temp;
     printf("after interchange x:%d and y:%d",x,y);
     break;
   }
   return 0;
}