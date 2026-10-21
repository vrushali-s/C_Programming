#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : Prints specified number of stars
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 21/10/2026
//
////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf(" * ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}