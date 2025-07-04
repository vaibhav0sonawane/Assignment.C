#include <stdio.h>
int main()
{
    int i, n, j, key, a[100], max, min, sum = 0, avg, op, temp,flag;
    printf("Enter elments in array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n < 0)
    {
        printf("invalid number");
        return 0;
    }
    //    display array
    printf("\nElements in array:");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\noperation can be done");
    printf("\n1.max 2.min 3.sum of array 4.avg of array 5.sorting 6.linear search");
    printf("\nEnter your choice:");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        max = a[0];
        for (i = 0; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
        }
        printf("\nmax num in array:%d", max);
        break;

    case 2:
        printf("\nmin of array");
        for (i = 0; i < n; i++)
        {
            if (min > a[i])
                min = a[i];
        }
        printf("\nmin num %d", min);
        break;
    case 3:
        for (i = 0; i < n; i++)
            sum = sum + a[i];
        printf("\nsum of array:%d", sum);
        break;
    case 4:
        for (i = 0; i < n; i++)
            sum = sum + a[i];
        printf("\nsum of array:%d", sum);
        printf("\nSum of array");
        avg = sum / n;
        printf("\naverage of array:%d", avg);
        break;
    case 5:
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        printf("After sorting array:");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        break;
    default:
        printf("\ninvalid input");
    }
    return 0;
}
