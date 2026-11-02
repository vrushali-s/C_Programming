#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////
//
//  Function Name   : Count
//  Description     : Count frequency of digits which 
//                    are less than 6
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 02/11/2026
//
///////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0, iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of digits less than 6 is : %d\n", iRet);

    return EXIT_SUCCESS;
}