#include<stdio.h>
int main(){
    float F,C,K;
    // F=fahrenheit,C=Celcius,K=Kelvin;
    printf("Enter temperature in Fahrenheit:");
    scanf("%2f",&F);
    C=5*(F-32)/9;
    printf("Temperature in Celcius is:%2f",C);
    K=C+273.15;
    printf("\nTemperature in Kelvin is:%2f",K);
    return 0;
}