#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Description     : Display digits of the number
//                    in reverse order
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 02/11/2026
//
////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}