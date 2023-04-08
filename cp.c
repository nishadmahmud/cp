#include <stdio.h>

int arr[1000000007];
int main()
{
    // print fibonacci series of first n numbers
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}