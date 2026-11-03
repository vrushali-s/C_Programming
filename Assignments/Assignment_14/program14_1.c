#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMul = 0;

    for(iCnt = 1,iMul = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d", iRet);

    return EXIT_SUCCESS;
}