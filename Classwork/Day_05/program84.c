#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("It is divisible by 5\n");
    }
    else
    {
        printf("It is not divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}