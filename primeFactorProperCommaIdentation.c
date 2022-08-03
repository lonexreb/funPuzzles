#include <stdio.h>
#include <stdbool.h>

bool primeNumTester(int n)
{

//TODO: Check if the given argument is prime number or not
//TODO: Return a boolean 

for (int i = 2; i < n; ++i) {
    if (n % i == 0)
    {
        return false;
    }
    
    }
    return true;

}



int primeDiv(int num)
{
//TODO: print the number divisble by the argument after passing the number from primeNumTester

int catchTheFirstPrime;

while(num != 1){

for(int i = 2; i <= num; ++i)
{
    if(primeNumTester(i)) 
    {
        if(num % i == 0) 
        {
            
            printf("%d", i);
            catchTheFirstPrime = i;
            break;
        }
    }
}
if (!primeNumTester(num)) printf(", ");
num = num / catchTheFirstPrime;

}
}

int main()

{
    int num;
    printf("Enter the number to be prime factorized: ");
    scanf("%d", &num );
    primeDiv(num);
    return 0;
}
