#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
// 
//  Function Name   : DisplayConvert
//  Description     : Convert case of character accepted from user
//  Input           : Character
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 21/10/2026
//
/////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    char cConverted = '\0';
    if((CValue >= 'a') && (CValue <='z'))
    {
        cConverted = CValue - 32;
        printf("%c", cConverted);
    }
    else if((CValue >= 'A') && (CValue <='Z'))
    {
        cConverted = CValue + 32;
        printf("%c", cConverted);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    
    return EXIT_SUCCESS;
}