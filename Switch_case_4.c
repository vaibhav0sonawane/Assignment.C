#include<stdio.h>
int main(){
    int radius,circle,height;
    float Pi=3.14,area,volume,circum;
    printf("Enter radius of circle:");
    scanf("%d",&radius);
    printf("-------MENU-------\n");
    printf("1.Area of Circle\n");
    printf("2.Circumference Of Circle\n");
    printf("3.Volume Of Sphere\n");
    printf("choice one from above:");
    scanf("%d",&circle);
    switch(circle){
        case 1:
        area=Pi*radius*radius;
        printf("area of circle:%.2f",area);
        break;
        case 2:
        circum=2*Pi*radius;
        printf("circumference:%.2f",circum);
        break;
        case 3:
        printf("enter height of speare:");
        scanf("%d",&height);
        volume=Pi*radius*radius*height;
        printf("volume of sphere:%.2f",volume);
        break;
        default:
        printf("invalid input");
        break;
    }
    return 0;
}