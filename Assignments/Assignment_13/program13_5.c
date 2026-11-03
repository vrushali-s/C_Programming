#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
//
//  Function Name   : CountDiff
//  Description     : Find difference between sum of even digits
//                    and sum of odd digits
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 03/11/2026
//
////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0, iResult = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo/10;
    }

    iResult = iEvenSum - iOddSum;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}