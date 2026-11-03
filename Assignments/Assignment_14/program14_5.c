#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0, iResult = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;
        }
    }

    iResult = iSumFact - iSumNonFact;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d\n",iRet);

    return EXIT_SUCCESS;
}