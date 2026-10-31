#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : DollarToINR
// Description      : Convert Dollar to INR
// Input            : Integer
// Output           : Integer
// Author           : Vrushali Prakash Shinde
// Date             : 31/10/2026
//
//////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d", iRet);

    return EXIT_SUCCESS;
}