# include <stdio.h>
//# include <stdbool.h>

int findSmaller (int num1, int num2)
{
    // Find the greater of the two numbers
    if (num1 <= num2) return num1;
    else return num2;
}

int findGCD (int num1, int num2)
{
    // If num1 == num2, return num1
    // Run a loop (start from 2) to determine a number which divides both num1 and num2
    // Store the dividing num as "gcd"
    // Store num1 as num1/gdc and num2 as num2/gcd
    // Progress with the loop, till it divides num1 and num2,
    // Repeat from TODO_3 and store gcd as gcd * i 
    // Else return gcd
  
    if (num1 == num2) return num1;
    
    int gcd = 1;
    int smaller = findSmaller(num1, num2);
    for (int i = 2; i <= smaller; ++i ) {
      if ((num1 % i == 0) && (num2 % i == 0)) {
        gcd = gcd * i;
        num1 = num1 / i;
        num2 = num2 / i;
        smaller = findSmaller(num1, num2);
        break;
        }        
    }
    return gcd;
}

int main ()
{
    int num1, num2;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    printf("The GCD of %d and %d is: %d ", num1, num2, findGCD(num1, num2));
    return 0; 
}
