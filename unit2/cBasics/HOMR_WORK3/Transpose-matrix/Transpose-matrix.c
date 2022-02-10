#include <stdio.h>
#define elem_num 50
int main()
{

    int elementsA[elem_num][elem_num] = {0};
    int elementsB[elem_num][elem_num] = {0};
    int elemA, elemB = 0;

    printf("Note! max 50 element \nEnter number of rows and columns :");
    scanf("%d%d", &elemA, &elemB);

    for (int i = 0; i < elemA; i++)
    {
        for (int j = 0; j < elemB; j++)
        {
            printf("Enter A%d%d: ", i + 1, j + 1);
            scanf("%d", &elementsA[i][j]);
            elementsB[j][i] = elementsA[i][j];
        }
    }
    printf("Entered Matrix\n");
    for (int i = 0; i < elemA; i++)
    {
        for (int j = 0; j < elemB; j++)
        {
            printf("%d", elementsA[i][j]);
            if (j == elemB - 1)
                printf("\n");
            else
                printf("  ");
        }
    }
    // transposinggg
    printf("Transposed Matrix\n");
    for (int i = 0; i < elemB; i++)
    {
        for (int j = 0; j < elemA; j++)
        {
            printf("%d", elementsB[i][j]);
            if (j == elemA - 1)
                printf("\n");
            else
                printf("  ");
        }
    }
    return 0;
}