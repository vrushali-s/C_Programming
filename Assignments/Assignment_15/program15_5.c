#include<stdio.h>
#include<stdlib.h>

float Percentage(int iTotal, int iObtained)
{
    float fResult = 0.0f;

    fResult = ((float)iObtained/(float)iTotal) * 100;

    return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage = %.2f %%\n", fRet);    

    return EXIT_SUCCESS;
}