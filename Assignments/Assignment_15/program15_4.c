#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return iMul;
    }
    
    if(iNo1 == 0)
    {
        iNo1 = 1;
    } 
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    iMul = iNo1 * iNo2 * iNo3;
    return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 =0, iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n",iRet);

    return EXIT_SUCCESS;
}