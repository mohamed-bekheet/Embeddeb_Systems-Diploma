#include <stdio.h>
#define elem_num 2
int main()
{

    float elementsA[elem_num][elem_num] = {0};
    float elementsB[elem_num][elem_num] = {0};

    for (int i = 0; i < elem_num; i++)
    {
        for (int j = 0; j < elem_num; j++)
        {
            printf("Enter A%d%d: ", i, j);
            scanf("%f", &elementsA[i][j]);
        }
    }
    for (int i = 0; i < elem_num; i++)
    {
        for (int j = 0; j < elem_num; j++)
        {
            printf("Enter B%d%d: ", i, j);
            scanf("%f", &elementsB[i][j]);
        }
    }
    printf("sum of matrix :\n" );
    for (int i = 0; i < elem_num; i++)
    {
        for (int j = 0; j < elem_num; j++)
        {
            printf("%.2f", elementsA[i][j]+elementsB[i][j]);
            if(j==elem_num-1)printf("\n");
            else printf("  ");
            
        }
    }
    return 0;
}