#include <stdio.h>
int main()
{
    int id = 1, pid1, pid2, pid3;
    char pname1[20], pname2[20], pname3[20], cname[100], cmob[100];
    float pprice1, pprice2, pprice3;
    int pqty1, pqty2, pqty3;
    float total, discount, disamount, payamount;
      printf("\nEnter product Name : ");
    scanf("%s", pname1);
    printf("\nEnter Price : ");
    scanf("%f", &pprice1);
    printf("\nEnter Quantity: ");
    scanf("%d", &pqty1);

    printf("\nEnter product 2 Name : ");
    scanf("%s", pname2);
    printf("\nEnter Price : ");
    scanf("%f", &pprice2);
    printf("\nEnter Quantity: ");
    scanf("%d", &pqty2);

    printf("\nEnter product 3 Name : ");
    scanf("%s", pname3);
    printf("\nEnter Price : ");
    scanf("%f", &pprice3);
    printf("\nEnter Quantity: ");
    scanf("%d", &pqty3);

        total = (pprice1 * pqty1) + (pprice2 * pqty2) + (pprice3 * pqty3);

    if (total >=1000)
        discount = 20;
    else if (total >=500 && total<1000)
        discount = 15;
    else if (total >=200 && total<500)
        discount = 8;
    else
        discount = 0;
        
        printf("discount:%f",discount);
     disamount=(total*discount)/100;
     printf("disamount:%f",disamount);
     payamount=total-disamount; 
     printf("payamount=%f",payamount);
     return 0;
}