#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////
//
//  Function Name   : CountFour
//  Description     : Count frequency of 4
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 02/11/2026
//
///////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0, iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iFreq++;
        }

        iNo = iNo/10;
    }

    return iFreq;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 is : %d\n", iRet);

    return EXIT_SUCCESS;
}