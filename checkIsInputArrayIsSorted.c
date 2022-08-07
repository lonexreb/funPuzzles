// Shubhankar Tripathy
// 7 Aug 2022
// To determine if array is sorted or not as per ascending order!


#include <stdio.h>
#include <stdbool.h>

bool isSorted (int n, int arr[])
{
    //n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; ++i)         // Do not have to go to last element, or else it will be overflow!
    {
        if (arr[i] > arr [i+1])           // If prev element is greater than next elem, return false
        {
            return false;
        }
    }
    return true;
}

int main ()
{
    int n;
    int arr[n];
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)                      // Taking the input for the array
    {
        printf("%d-> element: ", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    
    if(isSorted(n, arr))          // call isSorted function to check if the arr is sorted
    {
        printf("Sorted!");
        return 0;
    }
    printf("Not sorted!");
    return 0;
}
