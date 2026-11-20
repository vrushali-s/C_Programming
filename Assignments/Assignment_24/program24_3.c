#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;
    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
            return iIndex;
        }
        iIndex++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    fflush(stdin);
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n",iRet);

    return EXIT_SUCCESS;
}