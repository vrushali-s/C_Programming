#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A' :
        case 'a' :
            printf("Your exam at 7 am\n");
            break;
        
        case 'B' :
        case 'b' :
            printf("Your exam at 8:30 am\n");
            break;
        
        case 'C' :
        case 'c' :
            printf("Your exam at 9:20 am\n");
            break;

        case 'D' :
        case 'd' :
            printf("Your exam at 10:30 am\n");
            break;

        default:
            printf("Invalid division\n");

    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}