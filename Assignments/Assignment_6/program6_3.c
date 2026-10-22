#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f, fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid amount\n");
        return;
    }

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
        printf("Payable Amount = %f", fFinalAmount);
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = fAmount * (10/100);
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * (20/100);
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %f", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}