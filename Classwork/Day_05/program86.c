/*

    -------------------------------------------
                    Operation ||
    -------------------------------------------
    Result1         Result2         FinalResult
    -------------------------------------------
    TRUE            TRUE            TRUE        -> short circuit
    TRUE            FALSE           TRUE        -> short circuit
    FALSE           TRUE            TRUE           
    FALSE           FALSE           FALSE          
    -------------------------------------------

*/

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("It is divisible either by 3 or 5\n");
    }
    else
    {
        printf("It is not divisible by 3 or 5\n");
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