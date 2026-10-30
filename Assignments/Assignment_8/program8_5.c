#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : TableRev
// Description      : Display table of number in reverse order
// Input            : Integer
// Output           : None
// Author           : Vrushali Prakash Shinde
// Date             : 30/10/2026
//
//////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d \n", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}