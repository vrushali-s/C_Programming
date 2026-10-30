#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Print number of $ & *
// Input         : Integer
// Output        : None
// Author        : Vrushali Prakash Shinde
// Date          : 30/10/2026
//
/////////////////////////////////////////////

void Pattern(int iCount)
{
    int iCnt = 0;

    if(iCount < 0)
    {
        iCount = -iCount;
    }

    for(iCnt = 1; iCnt <= iCount; iCnt++)
    {
        printf("$   *   ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}