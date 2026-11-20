#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLast = -1;
    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
            iLast = iIndex;
        }
        iIndex++;
    }
    return iLast;
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

    iRet = LastChar(arr, cValue);

    printf("Character last location is : %d\n",iRet);

    return EXIT_SUCCESS;
}