#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool arr[1000000] = {0};
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