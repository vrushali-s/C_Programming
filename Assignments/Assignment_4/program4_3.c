#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
// 
//  Function Name   : FindGreater
//  Description     : Find greater number among two numbers
//  Input           : Integer, Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 22/10/2026
//
/////////////////////////////////////////////////////////////

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is greater\n", iNo1);
    }
    else if(iNo2 > iNo1)
    {
        printf("%d is greater\n", iNo2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}