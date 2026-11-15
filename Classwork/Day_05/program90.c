#include<stdio.h>
#include<stdlib.h>

int summation(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iResult = 0 ;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iResult = summation(iValue);

    printf("Summation is : %d\n", iResult);
    return EXIT_SUCCESS;
}