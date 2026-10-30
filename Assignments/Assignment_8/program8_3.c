#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : Factorial
// Description      : Find factorial
// Input            : Integer
// Output           : Integer
// Author           : Vrushali Prakash Shinde
// Date             : 30/10/2026
//
//////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d",iRet);

    return EXIT_SUCCESS;
}