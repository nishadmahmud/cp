#include <stdio.h>

int arr[1000000007];
int main()
{
    // check if the array is a permutation
    int n, x;
    scanf("%d", &n);
  
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != 1)
        {
            printf("Not a permutation\n");
            return 0;
        }
    }
    printf("Permutation\n");
    return 0;
}
