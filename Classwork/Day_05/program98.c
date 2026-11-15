#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;
ULONG factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    ULONG lResult = 0 ;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    lResult = factorial(iValue);

    printf("Factorial is : %lld\n", lResult);
    return EXIT_SUCCESS;
}