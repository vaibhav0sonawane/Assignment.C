#include <stdio.h>
int main()
{
    int a, b, total=0;
    char ch;
    printf("enter two numbers:");
    scanf("%d"
          "%d",
          &a, &b);
    printf("Enter operation to do(+,-,*,/):");
    scanf("%s", &ch);
    switch (ch)
    {
    case '+':
        a + b;
        printf("total:%d", a+b);
        break;
    case '-':
        total = a - b;
        printf("total:%d", total);
        break;
    case '*':
        total = a * b;
        printf("total:%d", total);
        break;
    case '/':
        total = a / b;
        printf("total:%d", total);
        break;
    }
    return 0;
}
