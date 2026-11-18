#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0, iCount = 0;

    i = 2, iCount = 1;
    while(iCount <= iNo)
    {
        printf("%d\t",i);
        i += 2;
        iCount++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}