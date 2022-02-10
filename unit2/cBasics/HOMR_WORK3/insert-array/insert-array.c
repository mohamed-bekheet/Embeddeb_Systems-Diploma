#include <stdio.h>
#define elem_num 50
int main()
{
    int user_input = 0;
    
    printf("Enter no of elements : ");
    scanf("%d", &user_input);
    int elementsA[elem_num] = {0};

    // fill array
    for (int i = 0; i < user_input; i++)
    {
       scanf("%d", &elementsA[i]);
    }

    int index = 0;
    int newElement = 0;
    //get the new element
    printf("Enter the element to be inserted");
    scanf("%d",&newElement);
    //get index
    printf("Enter the index : ");
    scanf("%d",&index);
    //let space for new inserting
    for(int i=user_input;i>index;i--){
        elementsA[i]=elementsA[i-1];//expand the array
    }
    elementsA[index]=newElement;
     //print array
    for(int i =0;i<user_input+1;i++)printf("%d ",elementsA[i]);

    return 0;
}