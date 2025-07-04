#include <stdio.h>
int main()
{
    int day;
    printf("1.Monday,2.Tuesday,3.Wednesday,4.Thusday,5.Friday,6.Saturday,7.Sunday");
    printf("Enter Day number:");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
    printf("Invalid number");
    }
    return 0;
}