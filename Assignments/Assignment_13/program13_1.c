#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
//
//  Function Name   : CountEven
//  Description     : Count even digits in the number
//  Input           : Integer
//  Output          : Integer
//  Author          : Vrushali Prakash Shinde
//  Date            : 03/11/2026
//
////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit =  0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("Count of even digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}