#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : It is used to display integer from 5 to 1
//  Input           : None
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 20/10/2026
//
///////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    
    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n", iCnt);
        iCnt--;
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}