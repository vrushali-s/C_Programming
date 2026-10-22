#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckVotingEligibility
//  Description     : Check whether a person is eligible to vote
//  Input           : Integer
//  Output          : None
//  Author          : Vrushali Prakash Shinde
//  Date            : 22/10/2026
//
/////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
        return;
    }

    if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    if(scanf("%d", &iAge) != 1)
    {
        printf("Invalid input\n");

        return EXIT_FAILURE;
    }

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}