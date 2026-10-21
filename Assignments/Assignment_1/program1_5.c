#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
//  Function Name   : Accept
//  Description     : It is used to print specified 
//                    number of stars
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*   ");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}