#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter a number to cheack even or odd: ");
    scanf("%d", &num1);
    if(num1%2 == 0)printf("%d is even", num1);
    else printf("%d is odd", num1);}