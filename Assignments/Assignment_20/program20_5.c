#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow + 1; i++)
    {
        for(j = 1; j <= iCol + 1; j++)
        {
            if((i == j) || (i == 1) || (j == 1) || (i == (iRow + 1)) || (j == (iCol + 1)))
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return EXIT_SUCCESS;
}