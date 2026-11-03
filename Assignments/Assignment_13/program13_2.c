#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
//
//  Function Name   : CountOdd
//  Description     : Count odd digits in the number
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 03/11/2026
//
////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit =  0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo/10;
    }

    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("Count of odd digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}