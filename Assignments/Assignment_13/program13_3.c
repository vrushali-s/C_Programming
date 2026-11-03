#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit =  0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Count of digits between 3 and 7 is : %d\n", iRet);

    return EXIT_SUCCESS;
}