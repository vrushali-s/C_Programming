#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : Print first 5 multiples of N
// Input         : Integer
// Output        : None
// Author        : Vrushali Prakash Shinde
// Date          : 30/10/2026
//
/////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d  ",(iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}