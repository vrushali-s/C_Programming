#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 0)
    {
        printf("Invalid unit");
        return;
    }
    if((iUnits > 0) && (iUnits <= 100))
    {
        fBill = iUnits * 5;
        printf("Bill is %.2f rupees\n", fBill);
    }
    else if((iUnits >= 101) && (iUnits <= 200))
    {
        float fTemp = iUnits - 100;
        fBill = (fTemp * 7) + (100 * 5);
        printf("Bill is %.2f rupees\n", fBill);
    }
    else
    {
        float fTemp = iUnits - 200;
        fBill = (fTemp * 10) + (100 * 7) + (100 * 5);
        printf("Bill is %.2f rupees\n", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}