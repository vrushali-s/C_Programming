#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////
// 
//  Function Name   : ChkVowel
//  Description     : Check whether the character accepted
//                    from user is vowel or not
//  Input           : Character
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 21/10/2026
//
/////////////////////////////////////////////////////////////

BOOL ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || 
        CValue == 'o' || CValue == 'u' || CValue == 'A' || 
        CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }
    
    return EXIT_SUCCESS;
}