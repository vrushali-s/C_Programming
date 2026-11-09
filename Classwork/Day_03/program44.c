#include<stdio.h>
#include<stdlib.h>

float findAverage(int iNo1, int iNo2)
{
    float fAvg = 0.0f;
    fAvg = (iNo1 + iNo2)/2;
    return fAvg;
}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    fResult = findAverage(iValue1, iValue2);

    printf("Average = %f", fResult);

    return EXIT_SUCCESS;
}
