#include<stdio.h>
#include<stdlib.h>

float findAverage(int iNo1, int iNo2, int iNo3)
{
    float fAvg = 0.0f;
    //Typecasting
    fAvg = ((float)iNo1 + (float)iNo2 + (float)iNo3) / 3;
    return fAvg;
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    printf("Enter third number : \n");
    scanf("%d", &iValue3);

    fResult = findAverage(iValue1, iValue2, iValue3);

    printf("Average = %f", fResult);

    return EXIT_SUCCESS;
}
