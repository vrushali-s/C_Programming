#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : Prints the first integer argument repeatedly
//                    based on the count specified by the second argument.
//  Input           : Integer, Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 21/10/2026
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter frequency : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}