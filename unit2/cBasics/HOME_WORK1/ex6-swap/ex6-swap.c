#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter value of a: ");
    scanf("%d", &num1);
    printf("Enter value of b: ");
    scanf("%d", &num2);
    // swap
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping, value of a = %d \n After swapping, value of b = %d", num1, num2);
}