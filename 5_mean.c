#include<stdio.h>
int main(){
    float a,b,AM,HM;
    // AM=arithmatic mean,Hm=harmonic mean;
     printf("Enter Two numbers:");
    scanf("%f""%f",&a,&b);
    AM=a+b/2;
    printf("Arithmaeic mean is:%2f",AM);
    HM=a*b/(a+b);
    printf("harmonic mean is:%2f",HM);
}