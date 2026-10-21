#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : It is used to display Marvellous 5 times
//  Input           : None
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 20/10/2026
//
//////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}