#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *end = str;
    char *start = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(end >= start)
    {
        printf("%c",*end);
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}
