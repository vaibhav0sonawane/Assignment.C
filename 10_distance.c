#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,distance;
    printf("enter first co-ordinates=");
    scanf("%d""%d",&x1,&y1);
    printf("enter second co-ordinates=");
    scanf("%d""%d",&x2,&y2);
    int x=pow((x2-x1),2);
    int y=pow((y2-y1),2);
    int dtn=sqrt(x+y);
    printf("the distance between x and y is=%d\n",dtn);
    return 0;
}
