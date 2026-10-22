#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

/////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckDivisibility
//  Description     : Check divisibility by 5
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 22/10/2026
//
/////////////////////////////////////////////////////////////

int CheckDivisibility(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int bResult = false;

    printf("Enter number : \n");
    if(scanf("%d", &iValue) != 1)
    {
        printf("Invalid input\n");

        return EXIT_FAILURE;
    }

    bResult = CheckDivisibility(iValue);

    if(bResult == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return EXIT_SUCCESS;
}