// Shubhankar Tripathy
// 7 Aug 2022
// Find distince elem in an array

#include <stdio.h>
#include <stdbool.h>

int findDistinct(int n, int arr[])
{
    // Compare to the left method
    int count = 1;
    bool breakVal = false;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i - 1; j >= 0 ; --j)
        {   
            breakVal = false;
            if (arr[i] == arr[j])
            {
                breakVal = true;
                break;              
            }
        }
        if(!breakVal) count = count + 1;
    }
    return count;
}

int main ()
{
    int n;
    int arr[n];

    printf("Enter the number of elements in array (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Number of distinct element/s in the input array is/are: %d", findDistinct(n, arr));
    return 0;
}
