#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : Table
// Description      : Display table of number
// Input            : Integer
// Output           : None
// Author           : Vrushali Prakash Shinde
// Date             : 30/10/2026
//
//////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d \n", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}