#include <stdio.h>

int main()

{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; ++i) 
    {
        for (int j = 0; j <= n; ++j)
        {
            if ((i == 0) && (j == 0)) {printf("  "); }
            if ((i == 0) && (j != 0)) { printf("%d ", j);}
            if ((i != 0) && (j == 0)) {printf("%d ", i); }
            if ((i != 0) && (j != 0)) printf("* ");
        }
        printf("\n");
    }
    return 0;
}
