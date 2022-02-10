#include <stdio.h>

int main(void)
{
    int num1, num2,*swaper;
    num1=1;
    num2=2;
    printf("Enter value of a: ");
    scanf("%d", &num1);
    printf("Enter value of b: ");
    scanf("%d", &num2);

    // swaping
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    
    printf("After swapping, value of a = %d\nAfter swapping, value of b = %d", num1, num2);
}