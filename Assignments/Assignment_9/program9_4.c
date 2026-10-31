#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : OddFactorial
// Description      : Find factorial of odd numbers
// Input            : Integer
// Output           : Long Integer
// Author           : Vrushali Prakash Shinde
// Date             : 31/10/2026
//
//////////////////////////////////////////////////////////

long int OddFactorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter number to find factorial: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Factorial of %d is : %ld", iValue, iRet);

    return EXIT_SUCCESS;
}