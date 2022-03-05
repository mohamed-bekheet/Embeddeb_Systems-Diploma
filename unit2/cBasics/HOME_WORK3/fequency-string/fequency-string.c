#include <stdio.h>
int main()
{
    char string[100] = "";
    char ch = 0;
    int freq=0;

    printf("Enter your String : ");
    gets(string);

    printf("Enter char to find its freq : ");
    scanf("%c", &ch);

    for(int i=0;string[i]!='\0';i++){
        if (string[i]==ch)freq++;
    }

    printf("frecuency is : %d",freq);
    return 0;
}