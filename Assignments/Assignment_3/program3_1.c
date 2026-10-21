#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
// 
//  Function Name   : PrintEven
//  Description     : Accept one number from user and print 
//                    that number of even numbers on screen
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 21/10/2026
//
/////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0, iPrintCounter = 0;

    iCnt = 1;
    iPrintCounter = 1;
    while(iPrintCounter <= iNo)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
            iPrintCounter++;
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}