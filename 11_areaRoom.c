#include<stdio.h>
int main(){
    int hR,lR,bR,hD,bD,hW,bW;
    // hR,lR,bR=diamensions of room,hD,bD=diamension of door,hW,bW=diamension of window
    float areapain,areaRoof,area,areaDW;
    // areapain:area to be painted,areawhite:area to be whitewashed,
    // area=area of room,areaDW=area of door and windows
    printf("Enter the dimension of room:");
    scanf("%d""%d""%d",&hR,&lR,&bR);
    printf("Enter the dimension of door:");
    scanf("%d""%d",&hD,&bD);
    printf("Enter the dimension of window:");
    scanf("%d""%d",&hW,&bW);
    // area of room
    area=2*hR*(lR+bR);
    // area of window and door
    areaDW=(hD*bD)+2*(hW*bW);
    // area to be painted and whitewashed(roof)
    areapain=area-areaDW;
    areaRoof=(lR*bR);
    printf("area to be painted:%f",areapain);
    printf("\narea to be whitewashed(roof):%f",areaRoof);
    return 0;
}