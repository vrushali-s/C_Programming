#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////
//
//  Function Name   : ChkZero
//  Description     : Check whether number contains 0 or not
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 02/11/2026
//
///////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo/10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return EXIT_SUCCESS;
}