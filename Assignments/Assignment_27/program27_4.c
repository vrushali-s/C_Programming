#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')    
        ) 
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

    return EXIT_SUCCESS;
}
