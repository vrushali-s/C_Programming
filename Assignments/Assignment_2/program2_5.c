#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/////////////////////////////////////////////////////////////
//
//  Function Name   : ChkEven
//  Description     : It is used to check whether a number 
//                    is even or odd
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 21/10/2026
//
////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is even number.\n", iValue);
    }
    else
    {
        printf("%d is odd number.\n", iValue);
    }

    return EXIT_SUCCESS;
}