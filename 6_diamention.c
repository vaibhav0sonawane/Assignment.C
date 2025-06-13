#include<stdio.h>
int main(){
    int l,b,h,SA,V;
    // l=length,b=breadth,h=height,SA=surface area,V=volume;
     printf("Enter length,breadth,height of the cuboid:");
     scanf("%d""%d""%d",&l,&b,&h);
     SA=2*(l*b+l*h+b*h);
     printf("total surface area of cuboid is:%d",SA);
     V=l*b*h;
    printf("\ntotal Volume of cuboid is:%d",V);
    return 0;
}