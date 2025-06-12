#include<stdio.h>
int main(){
    float SA,D,Pi=3.14,V,H;
    // SA=surface area,D=dimension,v=volume,H=height
    printf("enter Diamension and height of cylinder:");
    scanf("%f" "%f",&D,&H);
    SA=2*Pi*D+2*Pi*D/2*H;
    printf("Surface Area of cylinder is:%f",SA);
    V=Pi*D*H;
    printf("\nVolume of cylinder is:%f",V);
    return 0;
}
