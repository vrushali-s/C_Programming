/*

    -------------------------------------------
                    Operation &&
    -------------------------------------------
    Result1         Result2         FinalResult
    -------------------------------------------
    TRUE            TRUE            TRUE
    TRUE            FALSE           FALSE
    FALSE           TRUE            FALSE           -> short circuit
    FALSE           FALSE           FALSE           -> short circuit
    -------------------------------------------

*/

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("It is divisible by 3 and 5\n");
    }
    else
    {
        printf("It is not divisible by 3 and 5\n");
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