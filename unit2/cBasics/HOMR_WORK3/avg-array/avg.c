#include <stdio.h>
#define elem_num 100
int main()
{

    int user_input = 0;
    printf("Enter number of elemesnts: ");
    scanf("%d", &user_input);
    if ((user_input >= 100) || user_input <= 0)
    {
        printf("Error!");
        return 0;
    }

    float elementsA[elem_num] = {0.0};

    for (int i = 0; i < user_input; i++)
    {
        printf("Enter A%d: ", i);
        scanf("%f", &elementsA[i]);
    }
    // avg
    printf("avg of matrix :\n");
    float avg = 0;
    for (int i = 0; i < user_input; i++)
    {
        avg += elementsA[i]/user_input;
    }
    printf("Average = %.2f", avg);
    return 0;
}