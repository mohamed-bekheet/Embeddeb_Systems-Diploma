#include <stdio.h>
#include <string.h>
int main()
{
    char string[100] = "";
    int length=0;

    printf("Enter your String : ");
    gets(string);

    for(int i=0;string[i]!='\0';i++){
        length++;
    }

    printf("length by iterate is : %d \n",length);
    printf("length by strlen() is : %d",strlen(string));
    return 0;
}