#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Print all odd numbers up to N
// Input         : Integer
// Output        : None
// Author        : Vrushali Prakash Shinde
// Date          : 30/10/2026
//
/////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
        {
            printf("%d  ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}