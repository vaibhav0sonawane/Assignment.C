//A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to 
// be withdrawn from the user and print the total number of currency notes of each 
// denomination the cashier will have to give
#include<stdio.h>
int main(){
  int amt;
  printf("enter amount:");
  scanf("%d",&amt);
  printf("\n10*%d",amt/10);
  amt=amt%10;
  printf("\n5*%d",amt/5);
  amt=amt%5;
  printf("\n1*%d",amt/1);
  amt=amt%1;
  return 0;
}