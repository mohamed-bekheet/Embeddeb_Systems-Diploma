#include <stdio.h>

int main()
{
    float nums[3];
    float largest_num = 0;
    //printf("\nEnter first num :");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the %d num :",i);
        scanf("%f", &nums[i]);
        
        if (largest_num < nums[i])
            largest_num = nums[i];
    }
    printf("largest num = %.2f", largest_num);
    return 0;
}