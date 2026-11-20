#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("SYMBOL \t DEC \t HEX \t OCT \n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c \t %d \t %x \t %o \n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}