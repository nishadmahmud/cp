#include <stdio.h>
#include <stdbool.h>
const int m = 1e9 + 7;
int arr[m];
int main()
{
    int n, x, find;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x] = true;
    }
    scanf("%d", &find);
    if (arr[find])
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}