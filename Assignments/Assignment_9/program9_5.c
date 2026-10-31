#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : FactorialDiff
// Description      : Find difference of even factorial and
//                    odd facrial
// Input            : Integer
// Output           : Integer
// Author           : Vrushali Prakash Shinde
// Date             : 31/10/2026
//
//////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 0, iOddFact = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iEvenFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    for(iCnt = 1, iOddFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d", iRet);

    return EXIT_SUCCESS;
}