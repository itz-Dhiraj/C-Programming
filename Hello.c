#include <stdio.h>
int main()
{
    printf("Hello World");

    int num1, num2, sum;
    printf("Enter a number for num1: ");
    scanf("%d", &num1);
    printf("Enter a number for num2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("sum is: %d", sum);

    return 0;
}