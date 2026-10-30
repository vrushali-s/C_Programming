#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
// Function Name    : Number
// Description      : Check whether number is small, medium
//                    or large based on conditions
// Input            : Integer
// Output           : None
// Author           : Vrushali Prakash Shinde
// Date             : 30/10/2026
//
//////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if((iNo >= 0) && (iNo <= 50))
    {
        printf("Small\n");
    }
    else if((iNo >= 51) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}