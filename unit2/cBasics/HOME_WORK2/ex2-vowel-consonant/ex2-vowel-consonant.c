#include <stdio.h>

int main()
{
        char num1,num2;
        printf("\nEnter a alphabet :");
        scanf("\n%c", &num1);
        if ((num1 >= 65 && num1 <= 90) || (num1 >= 97 && num1 <= 122))
        {
            switch (num1)
            {
            case 65:
                printf("%c is vowel\n", num1);
                break;
            case 97:
                printf("%c is vowel\n", num1);
                break;
            case 69:
                printf("%c is vowel\n", num1);
                break;
            case 101:
                printf("%c is vowel\n", num1);
                break;
            case 73:
                printf("%c is vowel\n", num1);
                break;
            case 105:
                printf("%c is vowel\n", num1);
                break;
            case 79:
                printf("%c is vowel\n", num1);
                break;
            case 111:
                printf("%c is vowel\n", num1);
                break;
            case 85:
                printf("%c is vowel\n", num1);
                break;
            case 117:
                printf("%c is vowel\n", num1);
                break;

            default:
                printf("%c is consonant\n", num1);
                break;
            }
        }
        else
            printf("%c is not a alphabet\n", num1);
    
    return 0;
}