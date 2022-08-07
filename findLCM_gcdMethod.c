// Shubhankar Tripathy
// 5 Aug 2022
// Find GCD and LCM by SDSU method (Copyright: Shubhankar)

#include <stdio.h>

int findSmaller(int num1, int num2)
{
    if (num1 <= num2) return num1;
    return num2;
}

int findGCD(int num1, int num2)
{
    if (num1 == num2) return num1;
    int gcd = 1;
    int smaller = findSmaller (num1, num2);

    for (int i = 2; i <= smaller; ++i)
    {
        if((num1%i == 0) && (num2%i == 0))
        {
            gcd = gcd * i;
            num1 = num1/ i;
            num2 = num2 / i;
            smaller = findSmaller(num1, num2);
        }
    }
    return gcd;
}

int findLCM(int num1, int num2)
{
    int gcd = findGCD (num1, num2); 
    num1 = num1 / gcd;
    num2 = num2 / gcd;

    int LCM = gcd * num1 * num2;

    return LCM;

}

int main ()
{
    int num1, num2;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    printf("The LCM of %d and %d is: %d ", num1, num2, findLCM(num1, num2));
    
    return 0;

}
