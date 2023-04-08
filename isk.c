#include <stdio.h>

int arr[1000000007];
int main()
{
    int n, x, find;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x] = i + 1;
    }
    scanf("%d", &find);
    if (arr[find])
        printf("Found at index %d\n", arr[find] - 1);
    else
        printf("Not found\n");
    return 0;
}