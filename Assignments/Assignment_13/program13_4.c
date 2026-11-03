#include<stdio.h>
#include<stdlib.h>

int MultiplyDigits(int iNo)
{
    int iDigit =  0, iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMul = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iNo = iNo/10;
            continue;
        }
        iMul = iMul * iDigit;
        iNo = iNo/10;
    }

    return iMul;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultiplyDigits(iValue);

    printf("Multiplication of digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}