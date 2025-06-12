#include<stdio.h>
int main(){
    float u,a,t,V,S;
    printf("Enter velocity,acceleration,time:");
    scanf("%f""%f""%f",&u,&a,&t);
    V=u+a*t;
    printf("Final Velocity:%f",V);
    S=u+a+t*t;
    printf("\ndistance traveled:%f",S);
    return 0;
}