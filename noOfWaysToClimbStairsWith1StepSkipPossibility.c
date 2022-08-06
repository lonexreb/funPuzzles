// Shubhankar Tripathy
// 6 Aug 2022
// No. of ways to climb n number of stairs with an allowance of 1 step skip


#include <stdio.h>

int stepFib (int steps)
{
    if (steps == 1) return 1;
    if (steps == 2) return 2;
    else return stepFib(steps - 1) + stepFib (steps - 2);
}

int main () 
{
    int numberOfStairs;

    printf("Enter the value of number of stairs: ");
    scanf("%d", &numberOfStairs);

    printf("Total number of ways to climb the %d stairs is: %d", numberOfStairs, stepFib(numberOfStairs));

    return 0;
}
