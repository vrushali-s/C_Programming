#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iValue = 0, iCnt = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\n", iCnt);
    }

    return EXIT_SUCCESS;
}