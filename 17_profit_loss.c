#include<stdio.h>
int main(){
    int cp,sp,profit,loss,same;
    // cp=cost price,sp=selling price;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("enter selling price:");
    scanf("%d",&sp);
    if(cp<=sp)
    {
        profit=sp-cp;
    printf("total profit:%d",profit);
    }
    else if(loss=cp-sp){
     printf("total loss:%d",loss);
    }
    else
     printf("nither profit nor loss",same);
return 0;
}