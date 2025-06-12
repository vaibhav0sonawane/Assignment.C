#include<stdio.h>
int main(){
    float area,radius,Pi=3.14,c;
    printf("enter radius of circle:");
    scanf("%f",&radius);
    area=Pi*radius*radius;
    printf("area of Circle is:%2f",area);
    c=2*Pi*radius;
    printf("\ncircumference of Circle is:%2f",c);
    return 0;
}