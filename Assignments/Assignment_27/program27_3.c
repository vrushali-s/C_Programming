#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmallCount = 0, iCapitalCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))      
        {
            iSmallCount++;
        }
        if((*str >= 'A') && (*str <= 'Z'))      
        {
            iCapitalCount++;
        }
        str++;
    }

    return (iSmallCount - iCapitalCount);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}
