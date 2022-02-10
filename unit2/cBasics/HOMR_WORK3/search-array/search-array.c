#include <stdio.h>
#define elem_num 50
int main()
{
    int user_input = 0;
    int elementsA[elem_num] = {0};
    // take input from user
    printf("Enter no of elements : ");
    scanf("%d ", &user_input);
    // fill array by user
    for (int i = 0; i < user_input; i++)
    {
        scanf("%d", &elementsA[i]);
    }

    int searchElement = 0;
    printf("Enter number you want to search : ");
    scanf("%d", &searchElement);
    // scan the array
    for (int i = 0; i < user_input; i++)
    {
        if (elementsA[i] == searchElement)
        {
            printf("found at index = %d", i); // print element inedx
            return 0;
        }
    }

    printf("not found");

    return 0;
}