#include<stdio.h>

void Display(char ch)
{
    char chX = '\0';

    if((ch >= 'A') && ch <= 'Z')
    {
        for(chX = ch; chX <= 'Z'; chX++)    
        {
            printf("%c\t",chX);
        }
    }
    else if((ch >= 'a') && ch <= 'z')
    {
        for(chX = ch; chX >= 'a'; chX--)    
        {
            printf("%c\t",chX);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}