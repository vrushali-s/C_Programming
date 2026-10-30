#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print numbers till user accepted number
// Input         : Integer
// Output        : None
// Author        : Vrushali Prakash Shinde
// Date          : 30/10/2026
//
/////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d  ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}