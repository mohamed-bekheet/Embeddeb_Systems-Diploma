#include <stdio.h>
#include <string.h>
int main()
{
    char string[100] = "";//buffer string
    char string_Reversed[100] = "";//buffer string
    int length=0;

    printf("Enter your String : ");
    gets(string);

    length = strlen(string);

    //reversing 
    for(int i=0;i<length;i++){
        string_Reversed[i]=string[length-1-i];
    }

printf("Reverse string is : %s",string_Reversed);
    return 0;
}