#include<stdio.h>
int main(){
    int hour,min,sec;
    printf("enter Hour:");
    scanf("%d",&hour);
    printf("enter Min:");
    scanf("%d",&min);
    printf("enter Sec:");
    scanf("%d",&sec);
    if(hour>=0 && hour<=24)
    {
    
       if(min>0 && min<=60)
     {
        
           if(sec>0 && sec<=60)
        {
            printf("Time is valid");
        }
        else
        printf("sec is invalid");
     }
     else
     printf("min is invalid");  
    }
    else
    printf("hour is invalid");
    return 0;
}
 