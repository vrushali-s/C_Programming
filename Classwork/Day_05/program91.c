#include<stdio.h>
#include<stdlib.h>

int factorial(int iNo)
{
    int iCnt = 0, iFact = 0;
    iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0, iResult = 0 ;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iResult = factorial(iValue);

    printf("Factorial is : %d\n", iResult);
    return EXIT_SUCCESS;
}