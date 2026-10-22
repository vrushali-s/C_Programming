#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(((fMarks < 0) || (fMarks > 100)) || (iAge < 0))
    {
        printf("Invalid input");
        return;
    }

    if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible for Admission\n");
    }
}

int main()
{
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter marks and age : ");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}