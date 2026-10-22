#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckEvenOdd
//  Description     : Check whether a number is even or odd.
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 22/10/2026
//
/////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if((iNo %2) == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}