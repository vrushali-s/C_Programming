#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckNumber
//  Description     : Check whether a number is positive,
//                    negative or zero.
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 22/10/2026
//
/////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive number\n");
    }
    else if(iNo < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}