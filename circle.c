#include <stdio.h>

int main()
{
    int n, peaks = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (arr[0] > arr[1] && arr[0] > arr[n - 1])
        peaks++;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            peaks++;
    }
    if (arr[n - 1] > arr[n - 2] && arr[n - 1] > arr[0])
        peaks++;

    printf("%d\n", peaks);
    return 0;
}